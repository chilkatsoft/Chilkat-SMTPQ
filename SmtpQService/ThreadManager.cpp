// ThreadManager.cpp: implementation of the ThreadManager class.
//
//////////////////////////////////////////////////////////////////////

#include <Windows.h>
#include <vector>
#include <iostream>

#include "ThreadManager.h"
#include "SmtpThread.h"
#include "util.h"
#include "svc.h"
#include <CkDirTree.h>
#include <CkStringArray.h>
#include <CkFileAccess.h>
#include <CkRegistry.h>


// Application Settings

const char *m_company = "Chilkat Software, Inc.";
const char *m_appName = "SmtpQ";

const char *g_defaultBaseDir = "c:\\temp\\ChilkatSmtpQ\\";

string ThreadManager::getAppSetting(const char *keyName, string defaultValue)
    {
    if (m_useRegistry)
	{
	CkRegistry reg;
	const char *value = reg.getProductInfo(m_company,m_appName,keyName);
	if (value)
	    {
	    string s = value; return s;
	    }
	else
	    {
	    return defaultValue;
	    }
	}
    else
	{
	return defaultValue;
	}
    }

void ThreadManager::tmFinalize(void)
    {
    logString("tmFinalize...");
    
    // The number of threads running at this point SHOULD be 0.
    logNameValueInt("g_numThreadsRunning",g_numThreadsRunning);
    
    for (int i=0; i<m_maxThreads; i++)
	{
	if (m_threadSlot[i])
	    {
	    logNameValueInt("threadSlotOccupied",i);
	    delete m_threadSlot[i];
	    m_threadSlot[i] = 0;
	    }
	}

    for (int i=0; i<m_maxThreads; i++) 
	{
	if (m_cachedMailman[i])
	    {
	    delete m_cachedMailman[i];
	    m_cachedMailman[i] = 0;
	    }
	}

    logNameValueInt("m_files_size",(int)m_files.size());
    m_files.clear();

    return;
    }

// This is always called before any slots have been used..
void ThreadManager::recreateThreadSlots(void)
    {
    delete [] m_threadSlot;
    m_threadSlot = new SmtpThread *[m_maxThreads];
    for (int i=0; i<m_maxThreads; i++) m_threadSlot[i] = 0;

    delete [] m_cachedMailman;
    m_cachedMailman = new CkMailMan *[m_maxThreads];
    for (int i=0; i<m_maxThreads; i++) m_cachedMailman[i] = 0;
    }

ThreadManager::ThreadManager() 
    {
    m_threadSlot = new SmtpThread *[m_maxThreads];
    for (int i=0; i<m_maxThreads; i++) m_threadSlot[i] = 0;

    m_cachedMailman = new CkMailMan *[m_maxThreads];
    for (int i=0; i<m_maxThreads; i++) m_cachedMailman[i] = 0;
    
    // Setting the Unique property prevents duplicates from being added.
    // It also causes an internal hash table to be kept for quick lookup to see
    // if a string is present or not.
    m_deadEmlFiles.put_Unique(true);
    }

ThreadManager::~ThreadManager()
    {
    delete [] m_threadSlot;
    m_threadSlot = 0;

    for (int i=0; i<m_maxThreads; i++) 
	{
	if (m_cachedMailman[i])
	    {
	    delete m_cachedMailman[i];
	    m_cachedMailman[i] = 0;
	    }
	}

    delete [] m_cachedMailman;
    m_cachedMailman = 0;
    }

// Return true if the file is being processed, if it is in our list of files
// that will be processed, or if it is present in deadEmlFiles.
bool ThreadManager::isFileScheduled(string filename)  
    {
    int i;

    //logString("isFileScheduled...");
    //logNameValue("filename",filename);

    for (int i=0; i<m_maxThreads; i++) 
	{
	SmtpThread *t = m_threadSlot[i];
	if (t)
	    {
	    //logNameValueInt("checkingSlot",i);
	    //logNameValue("threadFilename",t->m_filename);

	    if (filename == t->m_filename) 
		{
		//logNameValue("alreadyRunning",filename);
		return true;
		}
	    }
	}

    int numFiles = (int)m_files.size();
    for (i=0; i<numFiles; i++)
	{
	string fname = m_files.at(i);

	//logNameValueInt("checkingFileAt",i);
	//logNameValue("scheduledFilename",fname);

	if (filename == fname) 
	    {
	    //logNameValue("alreadyInFileList",filename);
	    return true;
	    }
	}

    if (m_deadEmlFiles.Contains(filename.c_str()))
	{
	//logNameValue("deadEmlFile",filename);
	return true;
	}

    return false;
    }

// All new files found are added to the m_files vector.
// Files that are already in m_files, have threads running, or are considered dead, are not added.
void ThreadManager::scanForNewFiles(void)
    {
#ifdef TEST_SMTPQ
    logString("....scanning for new files....");
    logNameValue("scanDir",m_queueDir);
#endif

    CkDirTree fList;

    fList.put_BaseDir(m_queueDir.c_str());
    fList.put_Recurse(false);

    bool success = fList.BeginIterate();
    if (success != true) 
	{  
	// There are no new files.
	//logString("The queue directory is empty.");
	return;
	}

    int numNewEmls = 0;
    while (fList.get_DoneIterating() != true) 
	{
	string filename = fList.relativePath();
	string extension = ".eml";

	//logNameValue("filename",filename);

	// Only process .eml files that are not already being handled...
	if (endsWith(filename,extension) && !isFileScheduled(filename))
	    {
	    m_files.push_back(filename);
	    if (!m_logErrorsOnly) logNameValue("New file detected",filename);
	    }

	//  Advance to the next file or sub-directory in the tree traversal.
	success = fList.AdvancePosition();
	if (success != true) 
	    {  
	    if (fList.get_DoneIterating()) break;

	    logNameValue("AdvancePosition",fList.lastErrorText()); 
	    return; 
	    }

	// Add a maximum of 40 new emls to be scheduled.
	// Anything not addedin this call to scanForNewFiles will be processed in a subsequent call..
	if (numNewEmls >= 40) break;
	}

    return;
    }

static DWORD WINAPI ThreadProc(LPVOID lpvThreadParm)
    {
    SmtpThread *t = (SmtpThread *)lpvThreadParm;

    t->runThread();

    g_numThreadsRunning--;

    return 0;
    }

void ThreadManager::startThread(SmtpThread *smtpThread)
    {
    DWORD threadID=0;
    HANDLE hThread = CreateThread(0,0,ThreadProc,(void *)smtpThread,0,&threadID);
    CloseHandle(hThread);
    }

void ThreadManager::startThreads()
    {
#ifdef TEST_SMTPQ
    logString("....starting threads....");
    logNameValueInt("m_files_size",m_files.size());
#endif

    while (m_files.size())
	{
	// Find an empty thread slot.
	int i = 0;
	for (i=0; i<m_maxThreads; i++)
	    {
	    if (m_threadSlot[i] == 0) break;
	    }
	if (i == m_maxThreads) break;

	string filename = m_files.at(0);
	m_files.erase(m_files.begin());

	if (!m_logErrorsOnly) logNameValue("startingThreadForEml",filename);

	// http://www.umich.edu/~eecs381/handouts/C++11_smart_ptrs.pdf
	m_threadSlot[i] = new SmtpThread(filename); 
	m_threadSlot[i]->copyFrom(*this);

	// Give this thread a new CkMailMan, or one of the existing CkMailMan objects..
	CkMailMan *pMailMan = get_a_mailman();
	m_threadSlot[i]->m_mailman = pMailMan;

	// Increment g_numThreadsRunning here, but then decrement after the thread exits.
	g_numThreadsRunning++;
	startThread(m_threadSlot[i]);
	}
    }

CkMailMan *ThreadManager::get_a_mailman(void)
    {
    for (int i=0; i<m_maxThreads; i++) 
	{
	if (m_cachedMailman[i])
	    {
	    CkMailMan *pMailman = m_cachedMailman[i];
	    m_cachedMailman[i] = 0;
	    return pMailman;
	    }
	}

    // No cached CkMailMan objects found, so return a new one..
    return new CkMailMan;
    }

void ThreadManager::cache_a_mailman(CkMailMan *pMailman)
    {
    if (!pMailman) return;

    for (int i=0; i<m_maxThreads; i++) 
	{
	if (!m_cachedMailman[i])
	    {
	    m_cachedMailman[i] = pMailman;
	    return;
	    }
	}

    // No empty slots..
    delete pMailman;
    return;
    }

void ThreadManager::checkThreads(void)
    {
#ifdef TEST_SMTPQ
    logString("....checking threads....");
#endif

    int i;
    for (i=0; i<m_maxThreads; i++)
	{
	SmtpThread *t = m_threadSlot[i];
	if (!t) continue;

	// Is this thread finished?
	if (t->isFinished())
	    {
	    if (t->m_emlAbandoned)
		{
		// Was unable to remove the .eml from the queue directory...
		m_deadEmlFiles.Append(t->m_filename.c_str());
		}

	    // Yes, its "run" method has completed and returned.
	    cache_a_mailman(t->m_mailman);
	    t->m_mailman = 0;

	    delete t;
	    m_threadSlot[i] = 0;
	    continue;
	    }
	}
    }


void ThreadManager::deleteDeadEmlFiles(void)
    {
#ifdef TEST_SMTPQ
    logString("....pruning dead eml files....");
    logNameValueInt("numDeadFiles",m_deadEmlFiles.get_Count());
#endif

    CkFileAccess fac;

    int i;
    int n = m_deadEmlFiles.get_Count();
    for (i=0; i<n; i++)
	{
	const char *path = m_deadEmlFiles.string(i);

	CkString strEmlPath;
	fullFilePath(m_queueDir.c_str(),path,strEmlPath);

#ifdef TEST_SMTPQ
	logNameValue("deletingFile1",strEmlPath.getString());
#endif
	if (DeleteFile(strEmlPath.getString()))
	    {
	    logNameValue("Deleted dead EML: ",path);
	    m_deadEmlFiles.RemoveAt(i);
	    i--;
	    n--;
	    }
	// Did the file go missing???  Maybe something external or somebody manually deleted it..
	else if (!fac.FileExists(strEmlPath.getString()))
	    {
	    logNameValue("Dead EML no longer exists: ",path);
	    m_deadEmlFiles.RemoveAt(i);
	    i--;
	    n--;
	    }
	}

    return;
    }


// Get the application settings from the registry.
bool ThreadManager::initAppSettings(void)
    {
    CkRegistry reg;
    string defaultValue;
    CkFileAccess fac;

    defaultValue = g_defaultBaseDir; defaultValue += "log";
    m_logDir = getAppSetting("LogDir",defaultValue);

    // Make sure the directory exists.
    if (!fac.DirEnsureExists(m_logDir.c_str())) return false;

    logString("---- SMTPQ Started ----");
    logNameValue("version",fac.version());	    // All Chilkat objects have a version property that reports the version of Chilkat. (It doesn't matter which "Ck" Chilkat object we choose..)
    logString(__DATE__);

    // *************************************************************
    // Get the queue directory, or set it to a default.
    defaultValue = g_defaultBaseDir; defaultValue += "queue";
    m_queueDir = getAppSetting("QueueDir",defaultValue);

    logNameValue("queueDirectory",m_queueDir);
    if (!fac.DirEnsureExists(m_queueDir.c_str())) 
	{
	logString("ERROR: Cannot create or access queue directory.");
	return false;
	}

    // *************************************************************
    // Undeliverable directory
    defaultValue = g_defaultBaseDir; defaultValue += "undeliverable";
    m_undeliverableDir = getAppSetting("UndelivDir",defaultValue);

    logNameValue("undeliverableDirectory",m_undeliverableDir);
    if (!fac.DirEnsureExists(m_undeliverableDir.c_str())) 
	{
	logString("ERROR: Cannot create or access undeliverable directory.");
	return false;
	}

    // *************************************************************
    // Sent directory
    defaultValue = g_defaultBaseDir; defaultValue += "sent";
    m_sentDir = getAppSetting("SentDir",defaultValue);

    logNameValue("sentDirectory",m_sentDir);
    if (!fac.DirEnsureExists(m_sentDir.c_str())) 
	{
	logString("ERROR: Cannot create or access sent directory.");
	return false;
	}

    // *************************************************************
    // SaveSent
    m_saveSent = false;
    defaultValue = "yes";
    string val = getAppSetting("SaveSent",defaultValue);
    CkString strVal; strVal.append(val.c_str()); strVal.trim2(); strVal.toLowerCase();
    if (strVal.equals("yes")) 
	{
	m_saveSent = true;
	logNameValue("SaveSent","true");
	}
    else
	{
	logNameValue("SaveSent","false");
	}

    // *************************************************************
    // LogErrorsOnly
    m_logErrorsOnly = false;
    defaultValue = "yes";
    val = getAppSetting("LogErrorsOnly",defaultValue);
    strVal.clear(); strVal.append(val.c_str()); strVal.trim2(); strVal.toLowerCase();
    if (strVal.equals("yes")) 
	{
	m_logErrorsOnly = true;
	logNameValue("LogErrorsOnly","true");
	}
    else
	{
	logNameValue("LogErrorsOnly","false");
	}

    // *************************************************************
    // MaxThreads
    defaultValue = std::to_string(m_maxThreads);
    val = getAppSetting("MaxThreads",defaultValue);
    strVal.clear(); strVal.append(val.c_str()); strVal.trim2();
    m_maxThreads = strVal.intValue();
    if (m_maxThreads < 1) m_maxThreads = 1;
    if (m_maxThreads > 100) m_maxThreads = 100;
    logNameValueInt("MaxThreads",m_maxThreads);
    recreateThreadSlots();

    // *************************************************************
    // MaxRetries
    defaultValue = std::to_string(m_maxRetryCount);
    val = getAppSetting("MaxRetries",defaultValue);
    strVal.clear(); strVal.append(val.c_str()); strVal.trim2();
    m_maxRetryCount = strVal.intValue();
    if (m_maxRetryCount < 0) m_maxRetryCount = 0;
    if (m_maxRetryCount > 10) m_maxRetryCount = 10;
    logNameValueInt("MaxRetries",m_maxRetryCount);

    return true;
    }

int ThreadManager::numThreadSlotsOccupied(void)
    {
    int n = 0;
    for (int i=0; i<m_maxThreads; i++)
	{
	if (m_threadSlot[i]) n++;
	}
    return n;
    }

void ThreadManager::run(bool bRunForever)
    {
    do
	{
	scanForNewFiles();
 	startThreads();
	checkThreads();
	deleteDeadEmlFiles();

	// If there is nothing else to do, then wait for files to arrive in the queue directory...
	if (!m_files.size() && !numThreadSlotsOccupied() && !g_numThreadsRunning)
	    {
	    if (!bRunForever) 
		{
		break;	// Don't wait for more files, just return.
		}

	    HANDLE h = FindFirstChangeNotification(m_queueDir.c_str(),FALSE,FILE_NOTIFY_CHANGE_FILE_NAME);
	    DWORD status = WaitForSingleObject(h,10000);
	    FindCloseChangeNotification(h);
	    }
	else 
	    {
	    Sleep(1000);
	    }

	} while (true);


    }


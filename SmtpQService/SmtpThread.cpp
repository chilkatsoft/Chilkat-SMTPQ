
#include <Windows.h>

#include <CkString.h>
#include <CkByteData.h>
#include <CkFileAccess.h>

#include "SmtpThread.h"


SmtpThread::SmtpThread(string filename) : m_running(true),m_emlAbandoned(false),m_mailman(0)
    {
    m_filename = filename;
    }

SmtpThread::~SmtpThread()
    {

    }

/*
The special SMTPQ headers are:

x-sendMime: yes
x-from: support@chilkatsoft.com
x-recipients: "Chilkat Admin" <admin@chilkatsoft.com>
x-smtpPort: ...
x-smtpHost: ...
x-smtpUsername: ...
x-smtpPassword: ...
x-sendIndividual: yes
x-startTls: no
x-ssl: no
x-SMTPQ-Version: 1.2.3
*/

bool SmtpThread::sendEmail(bool &bFailureIsFinal)
    {
    // This must get set to false for a known case where it might be possible
    // to retry...
    bFailureIsFinal = true;

    CkString strEmlPath;
    fullFilePath(m_queueDir.c_str(),m_filename.c_str(),strEmlPath);

    // First load the email.
    CkByteData mimeData;
    bool success = mimeData.loadFile(strEmlPath.getString());
    if (!success)
	{
	// Does the file exist?
	logNameValue("FailedToLoad",m_filename);

	CkFileAccess fac;
	if (fac.FileExists(strEmlPath.getString()))
	    {
	    logString("File may be locked by another process, will retry...");
	    bFailureIsFinal = false;
	    }
	else
	    {
	    logString("File does not exist.");
	    }

	return false;
	}

    // We pass 0 for the From and Recipients args because that info is embedded within the mimeData.
    // The special x-smtp* headers will be decoded and removed before sending.
    // All of the MailMan property settings (SMTP host, login, password, etc.) as well as the From/Recipient
    // information is contained in the x-smtp* headers.
    success = m_mailman->SendMimeBytes((const char *)0,(const char *)0,mimeData);
    if (!success)
	{
	string errText = m_mailman->lastErrorText();
	logNameValue("SendMimeBytes",errText);

	// We can retry from some errors...
	CkString failReason;
	m_mailman->get_SmtpFailReason(failReason);
	if (failReason.equals("Timeout") ||
	    failReason.equals("ConnectionLost") ||
	    failReason.equals("FromFailure") ||
	    failReason.equals("DataFailure") ||
	    failReason.equals("GreetingError") ||	    
	    failReason.equals("ConnectFailed"))
	    {
	    bFailureIsFinal = false;
	    }

	// Make sure the SMTP connection is closed after a failure.
	m_mailman->CloseSmtpConnection();
	}

    return success;
    }



void SmtpThread::moveToSentDir(void)
    {
    CkString strEmlPath;
    fullFilePath(m_queueDir.c_str(),m_filename.c_str(),strEmlPath);

    CkString strToPath;
    fullFilePath(m_sentDir.c_str(),m_filename.c_str(),strToPath);

#if defined(TEST_SMTPQ)
    logNameValue("movingFile",strEmlPath.getString());
    logNameValue("movingTo",strToPath.getString());
#endif

    if (!MoveFile(strEmlPath.getString(),strToPath.getString()))
	{
	CkString strWindowsError;
	strWindowsError.appendLastWindowsError();
	logString("Failed to move file to sent directory..");
	logNameValue("WindowsError",strWindowsError.getString());
	logNameValue("EML file",m_filename);
	logNameValue("Sent directory",m_sentDir);

#if defined(TEST_SMTPQ)
	logNameValue("deletingFile4",strEmlPath.getString());
#endif
	if (!DeleteFile(strEmlPath.getString()))
	    {
	    CkString strWindowsError;
	    strWindowsError.appendLastWindowsError();
	    logNameValue("Failed to delete file",m_filename);
	    logNameValue("WindowsError",strWindowsError.getString());

	    // This EML was abandoned in the queue directory..
	    m_emlAbandoned = true;
	    }
	}

    return;
    }


// Loads the file, sends the email, and logs the results.
// Sets the m_running flag to false when done.
void SmtpThread::runThread(void)
    {
    int tryCount = 0;
    CkString lastErrorText;

tryAgain:  
    if (!m_logErrorsOnly)
	{
	if (tryCount > 0)
	    {
	    logNameValue("Re-trying",m_filename);
	    logNameValueInt("TryCount",tryCount + 1);
	    }
	else
	    {
	    logNameValue("Sending",m_filename);
	    }
	}

    bool success = false;
    bool bFailureIsFinal = true;

    success = sendEmail(bFailureIsFinal);
    m_mailman->get_LastErrorText(lastErrorText);

    if (success)
	{
	if (m_saveSent)
	    {
	    moveToSentDir();
	    }
	else
	    {
	    CkString strEmlPath;
	    fullFilePath(m_queueDir.c_str(),m_filename.c_str(),strEmlPath);

#if defined(TEST_SMTPQ)
	    logNameValue("deletingFile3",strEmlPath.getString());
#endif
	    BOOL b = DeleteFile(strEmlPath.getString());
	    if (!b)
		{
		CkString strWindowsError;
		strWindowsError.appendLastWindowsError();
		logNameValue("Failed to delete file",m_filename);
		logNameValue("WindowsError",strWindowsError.getString());

		// This EML was abandoned in the queue directory..
		m_emlAbandoned = true;
		}
	    }

	if (!m_logErrorsOnly) 
	    {
	    logNameValue("Send successful",m_filename);
	    }

	}
    else if (bFailureIsFinal || (!m_maxRetryCount) || (tryCount > m_maxRetryCount))
	{
	if (bFailureIsFinal)
	    {
	    logNameValue("Send Failed, error is final and a retry won't succeed.",m_filename);
	    }
	else
	    {
	    logNameValue("Send Failed, no more retries",m_filename);
	    }

	CkString strEmlPath;
	fullFilePath(m_queueDir.c_str(),m_filename.c_str(),strEmlPath);

	CkString strToPath;
	fullFilePath(m_undeliverableDir.c_str(),m_filename.c_str(),strToPath);

#if defined(TEST_SMTPQ)
	logNameValue("movingFile2",strEmlPath.getString());
	logNameValue("movingTo2",strToPath.getString());
#endif

	if (!MoveFile(strEmlPath.getString(),strToPath.getString()))
	//if (!MoveFile(strEmlPath.getString(),m_undeliverableDir.c_str()))
	    {
#if defined(TEST_SMTPQ)
	    logNameValue("deletingFile2",strEmlPath.getString());
#endif
	    if (!DeleteFile(strEmlPath.getString()))
		{
		// This EML was abandoned in the queue directory..
		m_emlAbandoned = true;
		}
	    }
	}
    else
	{
	logString(lastErrorText.getString());

	logNameValue("Send Failed, will try again",m_filename);
	tryCount++;

	int delayMs = 1000;
	/*
	tryCount	    delayTime
	--------	    ---------
	1		    5 sec
	2		    10 sec
	3		    15 sec
	4		    1 min
	5		    1.5 minutes
	6		    2 minutes
	7		    5 minutes
	8		    10 minutes
	9		    15 minutes
	10		    20 minutes

	*/
	if (tryCount < 4)
	    {
	    // 5 seconds * tryCount
	    delayMs = 5000 * tryCount;
	    }
	else if (tryCount < 7)
	    {
	    delayMs = 30000 * (tryCount-2);
	    }
	else	// up to g_maxRetryCount (max 10) tries
	    {
	    delayMs = 300000 * (tryCount-6);
	    }

	logNameValueInt("tryCount",tryCount);
	logNameValueInt("sleepMillisec",delayMs);

	// When waiting for the retry, continue updating the heartbeat so that the ThreadManager
	// knows the thread is not dead.
	while (delayMs)
	    {
	    int t = delayMs > 1000 ? 1000 : delayMs;
	    ::Sleep(t);
	    delayMs -= t;
	    }

	goto tryAgain;
	}

    m_running = false;

    return;
    }


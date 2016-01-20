
#include <Windows.h>
using namespace std;
#include <string>
#include <fstream>

#include <CkString.h>
#include "SmtpqBase.h"



SmtpqBase::SmtpqBase(void) : m_logErrorsOnly(true),m_saveSent(false),m_maxThreads(20),m_useRegistry(true),m_maxRetryCount(10)
    {
    }

SmtpqBase::~SmtpqBase(void)
    {
    }


void SmtpqBase::fullFilePath(const char *path, const char *filename, CkString &strFullPath)
    {
    strFullPath.clear();
    strFullPath.append(path);
    strFullPath.replaceChar('\\','/');
    if (strFullPath.lastChar() != '/') strFullPath.appendChar('/');
    strFullPath.append(filename);
    }

void SmtpqBase::copyFrom(const SmtpqBase &src)
    {
    m_queueDir = src.m_queueDir;
    m_undeliverableDir = src.m_undeliverableDir;
    m_sentDir = src.m_sentDir;
    m_logDir = src.m_logDir;

    m_useRegistry = src.m_useRegistry;
    m_logErrorsOnly = src.m_logErrorsOnly;
    m_saveSent = src.m_saveSent;
    m_maxThreads = src.m_maxThreads;
    m_maxRetryCount = src.m_maxRetryCount;
    }

string SmtpqBase::genLogPath(void)
    {
    CkString path;
    path.append(m_logDir.c_str());

    if (path.lastChar() != '\\') path.appendChar('\\');

    SYSTEMTIME sysTime;
    GetSystemTime(&sysTime);
    
    path.append("smtpq_");
    path.appendInt(sysTime.wYear);
    path.appendChar('_');
    path.appendInt(sysTime.wMonth);
    path.appendChar('_');
    path.appendInt(sysTime.wDay);
    path.append(".log");

    string s = path.getString();
    return s;
    }

void SmtpqBase::logString(string s)
    {
    string logPath = genLogPath();

    CkString strDateTime;
    strDateTime.appendCurrentDateRfc822();

    ofstream fs;
    fs.open (logPath, ios::out | ios::app | ios::binary); 
    if (fs.is_open())
	{
	fs << "(" << strDateTime.getString() << ") " << s << "\n";
	fs.close();
	}
	
    return;
    }

void SmtpqBase::logNameValue(string name, string value)
    {
    logString(name + ": " + value);
    }

void SmtpqBase::logEmailValue(string emlFilename, string name, string value)
    {
    logString("[" + emlFilename + "] " + name + ": " + value);
    }

void SmtpqBase::logNameValueInt(string name, int value)
    {
    string vStr = std::to_string(value);
    logString(name + ": " + vStr);
    }

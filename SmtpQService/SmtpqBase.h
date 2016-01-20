#pragma once

#include <string>
using namespace std;

class SmtpqBase
    {
    public:
	SmtpqBase(void);
	~SmtpqBase(void);

	string genLogPath(void);

	void logString(string s);
	void logNameValue(string name, string value);
	void logEmailValue(string emlFilename, string name, string value);
	void logNameValueInt(string name, int value);

	void fullFilePath(const char *path, const char *filename, CkString &strFullPath);

	bool m_useRegistry;	// Set to false to NOT use the Windows Registry for looking up SMTPQ settings.

	bool m_logErrorsOnly;
	bool m_saveSent;
	int m_maxThreads;	    // Maximum number of threads to create.

	int m_maxRetryCount;	// Maximum number of retries for sending an email.

	string m_queueDir;		// The directory where EML files are placed.
	string m_undeliverableDir;	// Failed emails.
	string m_sentDir;		// Sent directory.
	string m_logDir;		// Log directory.

	void copyFrom(const SmtpqBase &src);

    };



#pragma once

using namespace std;

#include <string>
#include <CkString.h>
#include <CkLog.h>
#include <CkMailMan.h>
#include "SmtpqBase.h"
#include <CkMailMan.h>

class SmtpThread : public SmtpqBase
{
    private:
	bool sendEmail(bool &bFailureIsFinal);
	void moveToSentDir(void);

    public:
	CkMailMan *m_mailman;

	bool m_running;	    // True if the thread is still running.
	string m_filename;    // File being processed.

	// If true, then the EML was abandoned in the queue directory..
	// The .eml can become abandoned if for some reason the SMTPQ service was unable to move it or delete it.
	bool m_emlAbandoned;  

	SmtpThread(string filename);
	virtual ~SmtpThread();

	// Return true if this thread has finished.
	bool isFinished(void) { return !m_running; }

	// Loads the file, sends the email, and logs the results.
	// Sets the m_running flag when done.
	void runThread(void);

	//bool m_sendingNow;	// True if the email is being sent right now.
	//DWORD m_heartbeat;	// Last time a send was attempted.

};


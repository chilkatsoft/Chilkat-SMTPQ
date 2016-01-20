// TestSmtpQ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define _CRTDBG_MAP_ALLOC 
#include <windows.h>
#include <crtdbg.h>

#include "../SmtpQService/svc.h"
#include "../SmtpQService/ThreadManager.h"

#include <CkSettings.h>
#include <CkEmail.h>
#include <CkMailMan.h>

extern const char *g_defaultBaseDir;

bool createEmailInQueueDirectory(ThreadManager &tm, int idx)
    {
    CkEmail email;

    email.put_From("somebody@somewhere.com");
    email.AddTo("Somebody","somebodyelse@somewhereelse.com");
    email.put_Body("This is a test");
    
    CkString subject;
    subject.append("This is test number ");
    subject.appendInt(idx);
    email.put_Subject(subject.getString());

    // Modify this for your SMTP server settings..
    CkMailMan mailman;
    mailman.put_SmtpHost("smtp.myDomain.com");
    mailman.put_SmtpUsername("myUsername");
    mailman.put_SmtpPassword("myPassword");
    mailman.put_SmtpPort(465);
    mailman.put_SmtpSsl(true);

    bool success = mailman.SendQ2(email,tm.m_queueDir.c_str());
    printf("%s\n",mailman.lastErrorText());

    return success;
    }

void runTest(void)
    {
    ThreadManager tm;

    tm.m_useRegistry = false;
    g_defaultBaseDir = "c:/temp/testSmtpq/";

    // Unlocks the Chilkat CkMailMan software..
    smtpqInitialize();

    if (!tm.initAppSettings()) return;

    tm.m_logErrorsOnly = false;
    tm.m_maxThreads = 3;
    tm.recreateThreadSlots();

    int numToCreate = 9;
    for (int i=0; i<numToCreate; i++)
	{
	createEmailInQueueDirectory(tm,i);
	}

    tm.run(false);

    // Wait for all threads to complete..
    while (g_numThreadsRunning)
	{
	Sleep(100);
	}

    tm.tmFinalize();

    return;
    }


int _tmain(int argc, _TCHAR* argv[])
    {
    freopen("stdout.txt","wb",stdout);

    runTest();

    CkSettings::cleanupMemory();
    _CrtDumpMemoryLeaks();

    return 0;
    }


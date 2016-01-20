

#include <Windows.h>
#include <string>

#include "svc.h"
#include "ThreadManager.h"
#include <CkMailMan.h>

// This Windows service uses the Chilkat MailMan, which requires a license.
// The following should be replaced with a purchased unlock code:
const char *g_UnlockCode = "Anything for 30-day trial.";

int g_numThreadsRunning = 0;

//---------------------------------------------------------
bool smtpqInitialize(void)
    {
    // We can unlock the Chilkat MailMan, discard the object, and then all subsequent 
    // CkMailMan instantiations are already unlocked when created.
    CkMailMan mailman;
    if (!mailman.UnlockComponent(g_UnlockCode))
	{
	return false;
	}

    return true;
    }




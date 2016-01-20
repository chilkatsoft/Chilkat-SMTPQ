
#include <windows.h>
#include "svc.h"
#include "ThreadManager.h"

// private prototypes
BOOL NotifySCM(DWORD, DWORD, DWORD);
VOID ServiceMain(DWORD, LPTSTR *);
VOID ServiceHandler(DWORD);
bool InitAppSettings(void);

HANDLE  hDoneEvent = NULL, hThread = NULL;
DWORD   dwCurrentState;
SERVICE_STATUS_HANDLE  hService;

#define GENSRV_ServiceName      TEXT("ChilkatSmtpQ")
#define GENSRV_DisplayName      TEXT("Chilkat SMTP Queue")


//--------------------------------------------------------------
void main(void)
{

   SERVICE_TABLE_ENTRY ServiceTable[] = {
      {GENSRV_ServiceName, (LPSERVICE_MAIN_FUNCTION)ServiceMain},
      {NULL, NULL}
   };

   // connect to  the service control manager
   StartServiceCtrlDispatcher(ServiceTable);
   
}

DWORD MainServiceThread(LPDWORD ThreadParam)
    {
    ThreadManager tm;

    tm.m_useRegistry = true;

    if (!tm.initAppSettings()) return 0;

    // We should never return from tm.run...
    tm.run(true);

    // Wait for all threads to complete..
    while (g_numThreadsRunning)
	{
	Sleep(100);
	}

    tm.tmFinalize();

    return 0;
    }

BOOL ServiceInitialization(DWORD dwArgc, LPTSTR *lpszArgv)
    {
    // Unlocks the Chilkat CkMailMan software..
    return smtpqInitialize() ? TRUE : FALSE;
    }

//--------------------------------------------------------------
VOID ServiceMain(DWORD dwArgc, LPTSTR *lpszArgv)
{
   DWORD   ThreadId;

   if (!(hService = RegisterServiceCtrlHandler(
         GENSRV_ServiceName,
         (LPHANDLER_FUNCTION)ServiceHandler)))
      return;

   NotifySCM(SERVICE_START_PENDING, 0, 1);

   if (!ServiceInitialization(dwArgc, lpszArgv))
      return;

   NotifySCM(SERVICE_START_PENDING, 0, 2);
    if ((hDoneEvent=CreateEvent(NULL,FALSE,FALSE,NULL)) == 0)
      return;

   NotifySCM(SERVICE_START_PENDING, 0, 3);

   if ((hThread = CreateThread(0, 0,
         (LPTHREAD_START_ROUTINE)MainServiceThread, 0, 0,
         &ThreadId)) == 0) {
      CloseHandle(hDoneEvent);
      return;
   }

   NotifySCM(SERVICE_RUNNING, 0, 0);

   WaitForSingleObject(hDoneEvent, INFINITE);

   CloseHandle(hThread);
   ExitThread(ThreadId);
   CloseHandle(hDoneEvent);
   return;
}

//---------------------------------------------------------
VOID ServiceTermination(VOID)
    {
    }

//--------------------------------------------------------------
VOID ServiceHandler(DWORD fdwControl)
{
   switch(fdwControl) {
      case SERVICE_CONTROL_STOP:
         NotifySCM(SERVICE_STOP_PENDING, 0, 1);
         SetEvent(hDoneEvent);
         NotifySCM(SERVICE_STOPPED, 0, 0);
         break;
       case SERVICE_CONTROL_PAUSE:
         NotifySCM(SERVICE_PAUSE_PENDING, 0, 1);
         SuspendThread(hThread);
         NotifySCM(SERVICE_PAUSED, 0, 0);
         break;

      case SERVICE_CONTROL_CONTINUE:
         NotifySCM(SERVICE_CONTINUE_PENDING, 0, 1);
         ResumeThread(hThread);
         NotifySCM(SERVICE_RUNNING, 0, 0);
         break;

      case SERVICE_CONTROL_INTERROGATE:
         NotifySCM(dwCurrentState, 0, 0);
         break;

      case SERVICE_CONTROL_SHUTDOWN:
         ServiceTermination();
         break;
   }
}

//--------------------------------------------------------------
BOOL NotifySCM(DWORD dwState, DWORD dwWin32ExitCode,
      DWORD dwProgress)
{
   SERVICE_STATUS ServiceStatus;

   // fill in the SERVICE_STATUS structure
   ServiceStatus.dwServiceType = SERVICE_WIN32_OWN_PROCESS;
   ServiceStatus.dwCurrentState = dwCurrentState = dwState;
   ServiceStatus.dwControlsAccepted = SERVICE_ACCEPT_STOP |
      SERVICE_ACCEPT_PAUSE_CONTINUE | SERVICE_ACCEPT_SHUTDOWN;
   ServiceStatus.dwWin32ExitCode = dwWin32ExitCode;
   ServiceStatus.dwServiceSpecificExitCode = 0;
   ServiceStatus.dwCheckPoint = dwProgress;
   ServiceStatus.dwWaitHint = 3000;

   // send status to SCM
   return SetServiceStatus(hService, &ServiceStatus);
}


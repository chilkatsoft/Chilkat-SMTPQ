// This is a generated source file for Chilkat version 9.5.0.73
#ifndef _C_CkTaskWH
#define _C_CkTaskWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkTaskW CkTaskW_Create(void);
CK_VISIBLE_PUBLIC void CkTaskW_Dispose(HCkTaskW handle);
CK_VISIBLE_PUBLIC void CkTaskW_getDebugLogFilePath(HCkTaskW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkTaskW_putDebugLogFilePath(HCkTaskW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_getDebugLogFilePath(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_getFinished(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC int CkTaskW_getHeartbeatMs(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC void  CkTaskW_putHeartbeatMs(HCkTaskW cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkTaskW_getInert(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_getKeepProgressLog(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC void  CkTaskW_putKeepProgressLog(HCkTaskW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkTaskW_getLastErrorHtml(HCkTaskW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_getLastErrorHtml(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC void CkTaskW_getLastErrorText(HCkTaskW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_getLastErrorText(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC void CkTaskW_getLastErrorXml(HCkTaskW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_getLastErrorXml(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_getLastMethodSuccess(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC void  CkTaskW_putLastMethodSuccess(HCkTaskW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkTaskW_getLive(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC int CkTaskW_getPercentDone(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC int CkTaskW_getProgressLogSize(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC void CkTaskW_getResultErrorText(HCkTaskW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_getResultErrorText(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC void CkTaskW_getResultType(HCkTaskW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_getResultType(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC void CkTaskW_getStatus(HCkTaskW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_getStatus(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC int CkTaskW_getStatusInt(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC int CkTaskW_getTaskId(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_getTaskSuccess(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC void CkTaskW_getUserData(HCkTaskW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkTaskW_putUserData(HCkTaskW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_getUserData(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_getVerboseLogging(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC void  CkTaskW_putVerboseLogging(HCkTaskW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkTaskW_getVersion(HCkTaskW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_getVersion(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_Cancel(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC void CkTaskW_ClearProgressLog(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_CopyResultBytes(HCkTaskW cHandle, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkTaskW_GetResultBool(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_GetResultBytes(HCkTaskW cHandle, HCkByteData outBytes);
CK_VISIBLE_PUBLIC int CkTaskW_GetResultInt(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_GetResultString(HCkTaskW cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_getResultString(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_ProgressInfoName(HCkTaskW cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_progressInfoName(HCkTaskW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkTaskW_ProgressInfoValue(HCkTaskW cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkTaskW_progressInfoValue(HCkTaskW cHandle, int index);
CK_VISIBLE_PUBLIC void CkTaskW_RemoveProgressInfo(HCkTaskW cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkTaskW_Run(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_RunSynchronously(HCkTaskW cHandle);
CK_VISIBLE_PUBLIC BOOL CkTaskW_SaveLastError(HCkTaskW cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC void CkTaskW_SleepMs(HCkTaskW cHandle, int numMs);
CK_VISIBLE_PUBLIC BOOL CkTaskW_Wait(HCkTaskW cHandle, int maxWaitMs);
#endif

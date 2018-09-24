// This is a generated source file for Chilkat version 9.5.0.75
#ifndef _C_CkAuthUtil_H
#define _C_CkAuthUtil_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkAuthUtil CkAuthUtil_Create(void);
CK_VISIBLE_PUBLIC void CkAuthUtil_Dispose(HCkAuthUtil handle);
CK_VISIBLE_PUBLIC void CkAuthUtil_getDebugLogFilePath(HCkAuthUtil cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkAuthUtil_putDebugLogFilePath(HCkAuthUtil cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkAuthUtil_debugLogFilePath(HCkAuthUtil cHandle);
CK_VISIBLE_PUBLIC void CkAuthUtil_getLastErrorHtml(HCkAuthUtil cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkAuthUtil_lastErrorHtml(HCkAuthUtil cHandle);
CK_VISIBLE_PUBLIC void CkAuthUtil_getLastErrorText(HCkAuthUtil cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkAuthUtil_lastErrorText(HCkAuthUtil cHandle);
CK_VISIBLE_PUBLIC void CkAuthUtil_getLastErrorXml(HCkAuthUtil cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkAuthUtil_lastErrorXml(HCkAuthUtil cHandle);
CK_VISIBLE_PUBLIC BOOL CkAuthUtil_getLastMethodSuccess(HCkAuthUtil cHandle);
CK_VISIBLE_PUBLIC void CkAuthUtil_putLastMethodSuccess(HCkAuthUtil cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkAuthUtil_getUtf8(HCkAuthUtil cHandle);
CK_VISIBLE_PUBLIC void CkAuthUtil_putUtf8(HCkAuthUtil cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkAuthUtil_getVerboseLogging(HCkAuthUtil cHandle);
CK_VISIBLE_PUBLIC void CkAuthUtil_putVerboseLogging(HCkAuthUtil cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkAuthUtil_getVersion(HCkAuthUtil cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkAuthUtil_version(HCkAuthUtil cHandle);
CK_VISIBLE_PUBLIC BOOL CkAuthUtil_SaveLastError(HCkAuthUtil cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkAuthUtil_WalmartSignature(HCkAuthUtil cHandle, const char *requestUrl, const char *consumerId, const char *privateKey, const char *requestMethod, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkAuthUtil_walmartSignature(HCkAuthUtil cHandle, const char *requestUrl, const char *consumerId, const char *privateKey, const char *requestMethod);
#endif

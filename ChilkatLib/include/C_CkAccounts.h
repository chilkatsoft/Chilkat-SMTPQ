// This is a generated source file for Chilkat version 9.5.0.66
#ifndef _C_CkAccounts_H
#define _C_CkAccounts_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkAccounts CkAccounts_Create(void);
CK_VISIBLE_PUBLIC void CkAccounts_Dispose(HCkAccounts handle);
CK_VISIBLE_PUBLIC void CkAccounts_getDebugLogFilePath(HCkAccounts cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkAccounts_putDebugLogFilePath(HCkAccounts cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkAccounts_debugLogFilePath(HCkAccounts cHandle);
CK_VISIBLE_PUBLIC void CkAccounts_getLastErrorHtml(HCkAccounts cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkAccounts_lastErrorHtml(HCkAccounts cHandle);
CK_VISIBLE_PUBLIC void CkAccounts_getLastErrorText(HCkAccounts cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkAccounts_lastErrorText(HCkAccounts cHandle);
CK_VISIBLE_PUBLIC void CkAccounts_getLastErrorXml(HCkAccounts cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkAccounts_lastErrorXml(HCkAccounts cHandle);
CK_VISIBLE_PUBLIC BOOL CkAccounts_getLastMethodSuccess(HCkAccounts cHandle);
CK_VISIBLE_PUBLIC void CkAccounts_putLastMethodSuccess(HCkAccounts cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkAccounts_getUtf8(HCkAccounts cHandle);
CK_VISIBLE_PUBLIC void CkAccounts_putUtf8(HCkAccounts cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkAccounts_getVerboseLogging(HCkAccounts cHandle);
CK_VISIBLE_PUBLIC void CkAccounts_putVerboseLogging(HCkAccounts cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkAccounts_getVersion(HCkAccounts cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkAccounts_version(HCkAccounts cHandle);
CK_VISIBLE_PUBLIC BOOL CkAccounts_DeleteAccount(HCkAccounts cHandle, const char *accountName);
CK_VISIBLE_PUBLIC BOOL CkAccounts_GetEncrypted(HCkAccounts cHandle, const char *encoding, HCkPublicKey rsaKey, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkAccounts_getEncrypted(HCkAccounts cHandle, const char *encoding, HCkPublicKey rsaKey);
CK_VISIBLE_PUBLIC BOOL CkAccounts_GetJson(HCkAccounts cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkAccounts_getJson(HCkAccounts cHandle);
CK_VISIBLE_PUBLIC BOOL CkAccounts_LoadEncrypted(HCkAccounts cHandle, const char *accountData, const char *encoding, HCkPrivateKey rsaKey);
CK_VISIBLE_PUBLIC BOOL CkAccounts_LoadJson(HCkAccounts cHandle, const char *accountData);
CK_VISIBLE_PUBLIC BOOL CkAccounts_SaveLastError(HCkAccounts cHandle, const char *path);
#endif

// This is a generated source file for Chilkat version 9.5.0.66
#ifndef _C_CkAccountsWH
#define _C_CkAccountsWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkAccountsW CkAccountsW_Create(void);
CK_VISIBLE_PUBLIC void CkAccountsW_Dispose(HCkAccountsW handle);
CK_VISIBLE_PUBLIC void CkAccountsW_getDebugLogFilePath(HCkAccountsW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkAccountsW_putDebugLogFilePath(HCkAccountsW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkAccountsW_debugLogFilePath(HCkAccountsW cHandle);
CK_VISIBLE_PUBLIC void CkAccountsW_getLastErrorHtml(HCkAccountsW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkAccountsW_lastErrorHtml(HCkAccountsW cHandle);
CK_VISIBLE_PUBLIC void CkAccountsW_getLastErrorText(HCkAccountsW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkAccountsW_lastErrorText(HCkAccountsW cHandle);
CK_VISIBLE_PUBLIC void CkAccountsW_getLastErrorXml(HCkAccountsW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkAccountsW_lastErrorXml(HCkAccountsW cHandle);
CK_VISIBLE_PUBLIC BOOL CkAccountsW_getLastMethodSuccess(HCkAccountsW cHandle);
CK_VISIBLE_PUBLIC void  CkAccountsW_putLastMethodSuccess(HCkAccountsW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkAccountsW_getVerboseLogging(HCkAccountsW cHandle);
CK_VISIBLE_PUBLIC void  CkAccountsW_putVerboseLogging(HCkAccountsW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkAccountsW_getVersion(HCkAccountsW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkAccountsW_version(HCkAccountsW cHandle);
CK_VISIBLE_PUBLIC BOOL CkAccountsW_DeleteAccount(HCkAccountsW cHandle, const wchar_t *accountName);
CK_VISIBLE_PUBLIC BOOL CkAccountsW_GetEncrypted(HCkAccountsW cHandle, const wchar_t *encoding, HCkPublicKeyW rsaKey, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkAccountsW_getEncrypted(HCkAccountsW cHandle, const wchar_t *encoding, HCkPublicKeyW rsaKey);
CK_VISIBLE_PUBLIC BOOL CkAccountsW_GetJson(HCkAccountsW cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkAccountsW_getJson(HCkAccountsW cHandle);
CK_VISIBLE_PUBLIC BOOL CkAccountsW_LoadEncrypted(HCkAccountsW cHandle, const wchar_t *accountData, const wchar_t *encoding, HCkPrivateKeyW rsaKey);
CK_VISIBLE_PUBLIC BOOL CkAccountsW_LoadJson(HCkAccountsW cHandle, const wchar_t *accountData);
CK_VISIBLE_PUBLIC BOOL CkAccountsW_SaveLastError(HCkAccountsW cHandle, const wchar_t *path);
#endif

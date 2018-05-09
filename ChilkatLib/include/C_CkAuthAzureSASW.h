// This is a generated source file for Chilkat version 9.5.0.73
#ifndef _C_CkAuthAzureSASWH
#define _C_CkAuthAzureSASWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkAuthAzureSASW CkAuthAzureSASW_Create(void);
CK_VISIBLE_PUBLIC void CkAuthAzureSASW_Dispose(HCkAuthAzureSASW handle);
CK_VISIBLE_PUBLIC void CkAuthAzureSASW_getAccessKey(HCkAuthAzureSASW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkAuthAzureSASW_putAccessKey(HCkAuthAzureSASW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkAuthAzureSASW_getAccessKey(HCkAuthAzureSASW cHandle);
CK_VISIBLE_PUBLIC void CkAuthAzureSASW_getDebugLogFilePath(HCkAuthAzureSASW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkAuthAzureSASW_putDebugLogFilePath(HCkAuthAzureSASW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkAuthAzureSASW_getDebugLogFilePath(HCkAuthAzureSASW cHandle);
CK_VISIBLE_PUBLIC void CkAuthAzureSASW_getLastErrorHtml(HCkAuthAzureSASW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkAuthAzureSASW_getLastErrorHtml(HCkAuthAzureSASW cHandle);
CK_VISIBLE_PUBLIC void CkAuthAzureSASW_getLastErrorText(HCkAuthAzureSASW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkAuthAzureSASW_getLastErrorText(HCkAuthAzureSASW cHandle);
CK_VISIBLE_PUBLIC void CkAuthAzureSASW_getLastErrorXml(HCkAuthAzureSASW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkAuthAzureSASW_getLastErrorXml(HCkAuthAzureSASW cHandle);
CK_VISIBLE_PUBLIC BOOL CkAuthAzureSASW_getLastMethodSuccess(HCkAuthAzureSASW cHandle);
CK_VISIBLE_PUBLIC void  CkAuthAzureSASW_putLastMethodSuccess(HCkAuthAzureSASW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkAuthAzureSASW_getStringToSign(HCkAuthAzureSASW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkAuthAzureSASW_putStringToSign(HCkAuthAzureSASW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkAuthAzureSASW_getStringToSign(HCkAuthAzureSASW cHandle);
CK_VISIBLE_PUBLIC BOOL CkAuthAzureSASW_getVerboseLogging(HCkAuthAzureSASW cHandle);
CK_VISIBLE_PUBLIC void  CkAuthAzureSASW_putVerboseLogging(HCkAuthAzureSASW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkAuthAzureSASW_getVersion(HCkAuthAzureSASW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkAuthAzureSASW_getVersion(HCkAuthAzureSASW cHandle);
CK_VISIBLE_PUBLIC void CkAuthAzureSASW_Clear(HCkAuthAzureSASW cHandle);
CK_VISIBLE_PUBLIC BOOL CkAuthAzureSASW_GenerateToken(HCkAuthAzureSASW cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkAuthAzureSASW_generateToken(HCkAuthAzureSASW cHandle);
CK_VISIBLE_PUBLIC BOOL CkAuthAzureSASW_SaveLastError(HCkAuthAzureSASW cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC BOOL CkAuthAzureSASW_SetNonTokenParam(HCkAuthAzureSASW cHandle, const wchar_t *name, const wchar_t *value);
CK_VISIBLE_PUBLIC BOOL CkAuthAzureSASW_SetTokenParam(HCkAuthAzureSASW cHandle, const wchar_t *name, const wchar_t *authParamName, const wchar_t *value);
#endif

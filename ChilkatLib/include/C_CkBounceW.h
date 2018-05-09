// This is a generated source file for Chilkat version 9.5.0.73
#ifndef _C_CkBounceWH
#define _C_CkBounceWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkBounceW CkBounceW_Create(void);
CK_VISIBLE_PUBLIC void CkBounceW_Dispose(HCkBounceW handle);
CK_VISIBLE_PUBLIC void CkBounceW_getBounceAddress(HCkBounceW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkBounceW_getBounceAddress(HCkBounceW cHandle);
CK_VISIBLE_PUBLIC void CkBounceW_getBounceData(HCkBounceW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkBounceW_getBounceData(HCkBounceW cHandle);
CK_VISIBLE_PUBLIC int CkBounceW_getBounceType(HCkBounceW cHandle);
CK_VISIBLE_PUBLIC void CkBounceW_getDebugLogFilePath(HCkBounceW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void  CkBounceW_putDebugLogFilePath(HCkBounceW cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkBounceW_getDebugLogFilePath(HCkBounceW cHandle);
CK_VISIBLE_PUBLIC void CkBounceW_getLastErrorHtml(HCkBounceW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkBounceW_getLastErrorHtml(HCkBounceW cHandle);
CK_VISIBLE_PUBLIC void CkBounceW_getLastErrorText(HCkBounceW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkBounceW_getLastErrorText(HCkBounceW cHandle);
CK_VISIBLE_PUBLIC void CkBounceW_getLastErrorXml(HCkBounceW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkBounceW_getLastErrorXml(HCkBounceW cHandle);
CK_VISIBLE_PUBLIC BOOL CkBounceW_getLastMethodSuccess(HCkBounceW cHandle);
CK_VISIBLE_PUBLIC void  CkBounceW_putLastMethodSuccess(HCkBounceW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkBounceW_getVerboseLogging(HCkBounceW cHandle);
CK_VISIBLE_PUBLIC void  CkBounceW_putVerboseLogging(HCkBounceW cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkBounceW_getVersion(HCkBounceW cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkBounceW_getVersion(HCkBounceW cHandle);
CK_VISIBLE_PUBLIC BOOL CkBounceW_ExamineEmail(HCkBounceW cHandle, HCkEmailW email);
CK_VISIBLE_PUBLIC BOOL CkBounceW_ExamineEml(HCkBounceW cHandle, const wchar_t *emlFilename);
CK_VISIBLE_PUBLIC BOOL CkBounceW_ExamineMime(HCkBounceW cHandle, const wchar_t *mimeText);
CK_VISIBLE_PUBLIC BOOL CkBounceW_SaveLastError(HCkBounceW cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC BOOL CkBounceW_UnlockComponent(HCkBounceW cHandle, const wchar_t *unlockCode);
#endif

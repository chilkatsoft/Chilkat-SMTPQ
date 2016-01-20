// This is a generated source file for Chilkat version 9.5.0.55
#ifndef _C_CkZipCrcWH
#define _C_CkZipCrcWH
#include "chilkatDefs.h"

#include "Chilkat_C.h"

CK_VISIBLE_PUBLIC HCkZipCrcW CkZipCrcW_Create(void);
CK_VISIBLE_PUBLIC HCkZipCrcW CkZipCrcW_Create2(BOOL bCallbackOwned);
CK_VISIBLE_PUBLIC void CkZipCrcW_Dispose(HCkZipCrcW handle);
CK_VISIBLE_PUBLIC void CkZipCrcW_BeginStream(HCkZipCrcW cHandle);
CK_VISIBLE_PUBLIC int CkZipCrcW_CalculateCrc(HCkZipCrcW cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC int CkZipCrcW_EndStream(HCkZipCrcW cHandle);
CK_VISIBLE_PUBLIC int CkZipCrcW_FileCrc(HCkZipCrcW cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC HCkTaskW CkZipCrcW_FileCrcAsync(HCkZipCrcW cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC void CkZipCrcW_MoreData(HCkZipCrcW cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC BOOL CkZipCrcW_ToHex(HCkZipCrcW cHandle, int crc, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkZipCrcW_toHex(HCkZipCrcW cHandle, int crc);
#endif

// This is a generated source file for Chilkat version 9.5.0.55
#ifndef _C_CkZipCrc_H
#define _C_CkZipCrc_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

CK_VISIBLE_PUBLIC HCkZipCrc CkZipCrc_Create(void);
CK_VISIBLE_PUBLIC void CkZipCrc_Dispose(HCkZipCrc handle);
CK_VISIBLE_PUBLIC BOOL CkZipCrc_getUtf8(HCkZipCrc cHandle);
CK_VISIBLE_PUBLIC void CkZipCrc_putUtf8(HCkZipCrc cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkZipCrc_BeginStream(HCkZipCrc cHandle);
CK_VISIBLE_PUBLIC int CkZipCrc_CalculateCrc(HCkZipCrc cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC int CkZipCrc_EndStream(HCkZipCrc cHandle);
CK_VISIBLE_PUBLIC int CkZipCrc_FileCrc(HCkZipCrc cHandle, const char *path);
CK_VISIBLE_PUBLIC HCkTask CkZipCrc_FileCrcAsync(HCkZipCrc cHandle, const char *path);
CK_VISIBLE_PUBLIC void CkZipCrc_MoreData(HCkZipCrc cHandle, HCkByteData data);
CK_VISIBLE_PUBLIC BOOL CkZipCrc_ToHex(HCkZipCrc cHandle, int crc, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkZipCrc_toHex(HCkZipCrc cHandle, int crc);
#endif

// This is a generated source file for Chilkat version 9.5.0.73
#ifndef _C_CkCsr_H
#define _C_CkCsr_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkCsr CkCsr_Create(void);
CK_VISIBLE_PUBLIC void CkCsr_Dispose(HCkCsr handle);
CK_VISIBLE_PUBLIC void CkCsr_getCommonName(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkCsr_putCommonName(HCkCsr cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkCsr_commonName(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_getCompany(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkCsr_putCompany(HCkCsr cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkCsr_company(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_getCompanyDivision(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkCsr_putCompanyDivision(HCkCsr cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkCsr_companyDivision(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_getCountry(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkCsr_putCountry(HCkCsr cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkCsr_country(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_getDebugLogFilePath(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkCsr_putDebugLogFilePath(HCkCsr cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkCsr_debugLogFilePath(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_getEmailAddress(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkCsr_putEmailAddress(HCkCsr cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkCsr_emailAddress(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_getLastErrorHtml(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkCsr_lastErrorHtml(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_getLastErrorText(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkCsr_lastErrorText(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_getLastErrorXml(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkCsr_lastErrorXml(HCkCsr cHandle);
CK_VISIBLE_PUBLIC BOOL CkCsr_getLastMethodSuccess(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_putLastMethodSuccess(HCkCsr cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkCsr_getLocality(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkCsr_putLocality(HCkCsr cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkCsr_locality(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_getState(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkCsr_putState(HCkCsr cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkCsr_state(HCkCsr cHandle);
CK_VISIBLE_PUBLIC BOOL CkCsr_getUtf8(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_putUtf8(HCkCsr cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkCsr_getVerboseLogging(HCkCsr cHandle);
CK_VISIBLE_PUBLIC void CkCsr_putVerboseLogging(HCkCsr cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkCsr_getVersion(HCkCsr cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkCsr_version(HCkCsr cHandle);
CK_VISIBLE_PUBLIC BOOL CkCsr_GenCsrBd(HCkCsr cHandle, HCkPrivateKey privKey, HCkBinData csrData);
CK_VISIBLE_PUBLIC BOOL CkCsr_GenCsrPem(HCkCsr cHandle, HCkPrivateKey privKey, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkCsr_genCsrPem(HCkCsr cHandle, HCkPrivateKey privKey);
CK_VISIBLE_PUBLIC BOOL CkCsr_GetSubjectField(HCkCsr cHandle, const char *oid, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkCsr_getSubjectField(HCkCsr cHandle, const char *oid);
CK_VISIBLE_PUBLIC BOOL CkCsr_LoadCsrPem(HCkCsr cHandle, const char *csrPemStr);
CK_VISIBLE_PUBLIC BOOL CkCsr_SaveLastError(HCkCsr cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkCsr_SetSubjectField(HCkCsr cHandle, const char *oid, const char *value, const char *asnType);
#endif

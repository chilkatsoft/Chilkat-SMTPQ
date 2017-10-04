// This is a generated source file for Chilkat version 9.5.0.69
#ifndef _C_CkXmlDSigGen_H
#define _C_CkXmlDSigGen_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC HCkXmlDSigGen CkXmlDSigGen_Create(void);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_Dispose(HCkXmlDSigGen handle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getCustomKeyInfoXml(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putCustomKeyInfoXml(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_customKeyInfoXml(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getDebugLogFilePath(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putDebugLogFilePath(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_debugLogFilePath(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getKeyInfoKeyName(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putKeyInfoKeyName(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_keyInfoKeyName(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getKeyInfoType(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putKeyInfoType(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_keyInfoType(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getLastErrorHtml(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_lastErrorHtml(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getLastErrorText(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_lastErrorText(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getLastErrorXml(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_lastErrorXml(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_getLastMethodSuccess(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putLastMethodSuccess(HCkXmlDSigGen cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getSigId(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putSigId(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_sigId(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getSigLocation(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putSigLocation(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_sigLocation(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getSigNamespacePrefix(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putSigNamespacePrefix(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_sigNamespacePrefix(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getSigNamespaceUri(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putSigNamespaceUri(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_sigNamespaceUri(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getSignedInfoCanonAlg(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putSignedInfoCanonAlg(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_signedInfoCanonAlg(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getSignedInfoDigestMethod(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putSignedInfoDigestMethod(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_signedInfoDigestMethod(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getSignedInfoPrefixList(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putSignedInfoPrefixList(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_signedInfoPrefixList(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getSigningAlg(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putSigningAlg(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_signingAlg(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_getUtf8(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putUtf8(HCkXmlDSigGen cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_getVerboseLogging(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putVerboseLogging(HCkXmlDSigGen cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getVersion(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_version(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_getX509Type(HCkXmlDSigGen cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkXmlDSigGen_putX509Type(HCkXmlDSigGen cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_x509Type(HCkXmlDSigGen cHandle);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_AddEnvelopedRef(HCkXmlDSigGen cHandle, const char *id, HCkStringBuilder content, const char *digestMethod, const char *canonMethod, const char *refType);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_AddExternalBinaryRef(HCkXmlDSigGen cHandle, const char *uri, HCkBinData content, const char *digestMethod, const char *refType);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_AddExternalFileRef(HCkXmlDSigGen cHandle, const char *uri, const char *localFilePath, const char *digestMethod, const char *refType);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_AddExternalTextRef(HCkXmlDSigGen cHandle, const char *uri, HCkStringBuilder content, const char *charset, BOOL includeBom, const char *digestMethod, const char *refType);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_AddExternalXmlRef(HCkXmlDSigGen cHandle, const char *uri, HCkStringBuilder content, const char *digestMethod, const char *canonMethod, const char *refType);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_AddSameDocRef(HCkXmlDSigGen cHandle, const char *id, const char *digestMethod, const char *canonMethod, const char *prefixList, const char *refType);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_CreateXmlDSig(HCkXmlDSigGen cHandle, const char *inXml, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkXmlDSigGen_createXmlDSig(HCkXmlDSigGen cHandle, const char *inXml);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_CreateXmlDSigSb(HCkXmlDSigGen cHandle, HCkStringBuilder sbXml);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_SaveLastError(HCkXmlDSigGen cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_SetHmacKey(HCkXmlDSigGen cHandle, const char *key, const char *encoding);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_SetPrivateKey(HCkXmlDSigGen cHandle, HCkPrivateKey privKey);
CK_VISIBLE_PUBLIC BOOL CkXmlDSigGen_SetX509Cert(HCkXmlDSigGen cHandle, HCkCert cert, BOOL usePrivateKey);
#endif

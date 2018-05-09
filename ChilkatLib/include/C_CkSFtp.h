// This is a generated source file for Chilkat version 9.5.0.73
#ifndef _C_CkSFtp_H
#define _C_CkSFtp_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC void CkSFtp_setAbortCheck(HCkSFtp cHandle, BOOL (*fnAbortCheck)(void));
CK_VISIBLE_PUBLIC void CkSFtp_setPercentDone(HCkSFtp cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_VISIBLE_PUBLIC void CkSFtp_setProgressInfo(HCkSFtp cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_VISIBLE_PUBLIC void CkSFtp_setTaskCompleted(HCkSFtp cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_VISIBLE_PUBLIC HCkSFtp CkSFtp_Create(void);
CK_VISIBLE_PUBLIC void CkSFtp_Dispose(HCkSFtp handle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getAbortCurrent(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putAbortCurrent(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSFtp_getAccumulateBuffer(HCkSFtp cHandle, HCkByteData retval);
CK_VISIBLE_PUBLIC int CkSFtp_getAuthFailReason(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC int CkSFtp_getBandwidthThrottleDown(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putBandwidthThrottleDown(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSFtp_getBandwidthThrottleUp(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putBandwidthThrottleUp(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSFtp_getClientIdentifier(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putClientIdentifier(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_clientIdentifier(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getClientIpAddress(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putClientIpAddress(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_clientIpAddress(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC int CkSFtp_getConnectTimeoutMs(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putConnectTimeoutMs(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSFtp_getDebugLogFilePath(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putDebugLogFilePath(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_debugLogFilePath(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC int CkSFtp_getDisconnectCode(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getDisconnectReason(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSFtp_disconnectReason(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getEnableCache(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putEnableCache(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getEnableCompression(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putEnableCompression(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSFtp_getFilenameCharset(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putFilenameCharset(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_filenameCharset(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getForceCipher(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putForceCipher(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_forceCipher(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getForceV3(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putForceV3(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSFtp_getHeartbeatMs(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putHeartbeatMs(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSFtp_getHostKeyAlg(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putHostKeyAlg(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_hostKeyAlg(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getHostKeyFingerprint(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSFtp_hostKeyFingerprint(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getHttpProxyAuthMethod(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putHttpProxyAuthMethod(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_httpProxyAuthMethod(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getHttpProxyDomain(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putHttpProxyDomain(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_httpProxyDomain(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getHttpProxyHostname(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putHttpProxyHostname(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_httpProxyHostname(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getHttpProxyPassword(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putHttpProxyPassword(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_httpProxyPassword(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC int CkSFtp_getHttpProxyPort(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putHttpProxyPort(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSFtp_getHttpProxyUsername(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putHttpProxyUsername(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_httpProxyUsername(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC int CkSFtp_getIdleTimeoutMs(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putIdleTimeoutMs(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getIncludeDotDirs(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putIncludeDotDirs(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSFtp_getInitializeFailCode(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getInitializeFailReason(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSFtp_initializeFailReason(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getIsConnected(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getKeepSessionLog(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putKeepSessionLog(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSFtp_getLastErrorHtml(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSFtp_lastErrorHtml(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getLastErrorText(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSFtp_lastErrorText(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getLastErrorXml(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSFtp_lastErrorXml(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getLastMethodSuccess(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putLastMethodSuccess(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSFtp_getMaxPacketSize(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putMaxPacketSize(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getPasswordChangeRequested(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC int CkSFtp_getPercentDoneScale(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putPercentDoneScale(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getPreferIpv6(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putPreferIpv6(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getPreserveDate(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putPreserveDate(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSFtp_getProtocolVersion(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getReadDirMustMatch(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putReadDirMustMatch(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_readDirMustMatch(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getReadDirMustNotMatch(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putReadDirMustNotMatch(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_readDirMustNotMatch(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getServerIdentifier(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSFtp_serverIdentifier(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getSessionLog(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSFtp_sessionLog(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getSocksHostname(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putSocksHostname(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_socksHostname(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getSocksPassword(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putSocksPassword(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_socksPassword(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC int CkSFtp_getSocksPort(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putSocksPort(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSFtp_getSocksUsername(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putSocksUsername(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_socksUsername(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC int CkSFtp_getSocksVersion(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putSocksVersion(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSFtp_getSoRcvBuf(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putSoRcvBuf(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSFtp_getSoSndBuf(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putSoSndBuf(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSFtp_getSyncDirectives(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putSyncDirectives(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_syncDirectives(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getSyncedFiles(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putSyncedFiles(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_syncedFiles(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getSyncMustMatch(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putSyncMustMatch(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_syncMustMatch(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_getSyncMustNotMatch(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putSyncMustNotMatch(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_syncMustNotMatch(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getTcpNoDelay(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putTcpNoDelay(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSFtp_getUncommonOptions(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSFtp_putUncommonOptions(HCkSFtp cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSFtp_uncommonOptions(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC int CkSFtp_getUploadChunkSize(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putUploadChunkSize(HCkSFtp cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getUtcMode(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putUtcMode(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getUtf8(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putUtf8(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSFtp_getVerboseLogging(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_putVerboseLogging(HCkSFtp cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSFtp_getVersion(HCkSFtp cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSFtp_version(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC unsigned long CkSFtp_getXferByteCount(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC __int64 CkSFtp_getXferByteCount64(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC int CkSFtp_AccumulateBytes(HCkSFtp cHandle, const char *handle, int maxBytes);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_AccumulateBytesAsync(HCkSFtp cHandle, const char *handle, int maxBytes);
CK_VISIBLE_PUBLIC BOOL CkSFtp_Add64(HCkSFtp cHandle, const char *n1, const char *n2, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_add64(HCkSFtp cHandle, const char *n1, const char *n2);
CK_VISIBLE_PUBLIC BOOL CkSFtp_AuthenticatePk(HCkSFtp cHandle, const char *username, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_AuthenticatePkAsync(HCkSFtp cHandle, const char *username, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC BOOL CkSFtp_AuthenticatePw(HCkSFtp cHandle, const char *login, const char *password);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_AuthenticatePwAsync(HCkSFtp cHandle, const char *login, const char *password);
CK_VISIBLE_PUBLIC BOOL CkSFtp_AuthenticatePwPk(HCkSFtp cHandle, const char *username, const char *password, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_AuthenticatePwPkAsync(HCkSFtp cHandle, const char *username, const char *password, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC BOOL CkSFtp_AuthenticateSecPw(HCkSFtp cHandle, HCkSecureString login, HCkSecureString password);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_AuthenticateSecPwAsync(HCkSFtp cHandle, HCkSecureString login, HCkSecureString password);
CK_VISIBLE_PUBLIC BOOL CkSFtp_AuthenticateSecPwPk(HCkSFtp cHandle, HCkSecureString username, HCkSecureString password, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_AuthenticateSecPwPkAsync(HCkSFtp cHandle, HCkSecureString username, HCkSecureString password, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC void CkSFtp_ClearAccumulateBuffer(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_ClearCache(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC void CkSFtp_ClearSessionLog(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_CloseHandle(HCkSFtp cHandle, const char *handle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_CloseHandleAsync(HCkSFtp cHandle, const char *handle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_Connect(HCkSFtp cHandle, const char *domainName, int port);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_ConnectAsync(HCkSFtp cHandle, const char *domainName, int port);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ConnectThroughSsh(HCkSFtp cHandle, HCkSsh sshConn, const char *hostname, int port);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_ConnectThroughSshAsync(HCkSFtp cHandle, HCkSsh sshConn, const char *hostname, int port);
CK_VISIBLE_PUBLIC BOOL CkSFtp_CopyFileAttr(HCkSFtp cHandle, const char *localFilename, const char *remoteFilename, BOOL isHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_CopyFileAttrAsync(HCkSFtp cHandle, const char *localFilename, const char *remoteFilename, BOOL isHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_CreateDir(HCkSFtp cHandle, const char *path);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_CreateDirAsync(HCkSFtp cHandle, const char *path);
CK_VISIBLE_PUBLIC void CkSFtp_Disconnect(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_DownloadBd(HCkSFtp cHandle, const char *remoteFilePath, HCkBinData binData);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_DownloadBdAsync(HCkSFtp cHandle, const char *remoteFilePath, HCkBinData binData);
CK_VISIBLE_PUBLIC BOOL CkSFtp_DownloadFile(HCkSFtp cHandle, const char *handle, const char *toFilename);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_DownloadFileAsync(HCkSFtp cHandle, const char *handle, const char *toFilename);
CK_VISIBLE_PUBLIC BOOL CkSFtp_DownloadFileByName(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_DownloadFileByNameAsync(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
CK_VISIBLE_PUBLIC BOOL CkSFtp_DownloadSb(HCkSFtp cHandle, const char *remoteFilePath, const char *charset, HCkStringBuilder sb);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_DownloadSbAsync(HCkSFtp cHandle, const char *remoteFilePath, const char *charset, HCkStringBuilder sb);
CK_VISIBLE_PUBLIC BOOL CkSFtp_Eof(HCkSFtp cHandle, const char *handle);
CK_VISIBLE_PUBLIC int CkSFtp_FileExists(HCkSFtp cHandle, const char *remotePath, BOOL followLinks);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_FileExistsAsync(HCkSFtp cHandle, const char *remotePath, BOOL followLinks);
CK_VISIBLE_PUBLIC BOOL CkSFtp_Fsync(HCkSFtp cHandle, const char *handle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_FsyncAsync(HCkSFtp cHandle, const char *handle);
CK_VISIBLE_PUBLIC HCkDateTime CkSFtp_GetFileCreateDt(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_GetFileCreateDtAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_GetFileCreateTime(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, SYSTEMTIME *outSysTime);
CK_VISIBLE_PUBLIC BOOL CkSFtp_GetFileCreateTimeStr(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_getFileCreateTimeStr(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_GetFileCreateTimeStrAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_GetFileGroup(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_getFileGroup(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_GetFileGroupAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_GetFileLastAccess(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, SYSTEMTIME *outSysTime);
CK_VISIBLE_PUBLIC HCkDateTime CkSFtp_GetFileLastAccessDt(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_GetFileLastAccessDtAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_GetFileLastAccessStr(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_getFileLastAccessStr(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_GetFileLastAccessStrAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_GetFileLastModified(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, SYSTEMTIME *outSysTime);
CK_VISIBLE_PUBLIC HCkDateTime CkSFtp_GetFileLastModifiedDt(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_GetFileLastModifiedDtAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_GetFileLastModifiedStr(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_getFileLastModifiedStr(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_GetFileLastModifiedStrAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_GetFileOwner(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_getFileOwner(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_GetFileOwnerAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC int CkSFtp_GetFilePermissions(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_GetFilePermissionsAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC int CkSFtp_GetFileSize32(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC __int64 CkSFtp_GetFileSize64(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_GetFileSizeStr(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_getFileSizeStr(HCkSFtp cHandle, const char *pathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_HardLink(HCkSFtp cHandle, const char *oldPath, const char *newPath);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_HardLinkAsync(HCkSFtp cHandle, const char *oldPath, const char *newPath);
CK_VISIBLE_PUBLIC BOOL CkSFtp_InitializeSftp(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_InitializeSftpAsync(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_LastReadFailed(HCkSFtp cHandle, const char *handle);
CK_VISIBLE_PUBLIC int CkSFtp_LastReadNumBytes(HCkSFtp cHandle, const char *handle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_OpenDir(HCkSFtp cHandle, const char *path, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_openDir(HCkSFtp cHandle, const char *path);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_OpenDirAsync(HCkSFtp cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkSFtp_OpenFile(HCkSFtp cHandle, const char *remotePath, const char *access, const char *createDisposition, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_openFile(HCkSFtp cHandle, const char *remotePath, const char *access, const char *createDisposition);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_OpenFileAsync(HCkSFtp cHandle, const char *remotePath, const char *access, const char *createDisposition);
CK_VISIBLE_PUBLIC HCkSFtpDir CkSFtp_ReadDir(HCkSFtp cHandle, const char *handle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_ReadDirAsync(HCkSFtp cHandle, const char *handle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ReadFileBytes(HCkSFtp cHandle, const char *handle, int numBytes, HCkByteData outBytes);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_ReadFileBytesAsync(HCkSFtp cHandle, const char *handle, int numBytes);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ReadFileBytes32(HCkSFtp cHandle, const char *handle, int offset, int numBytes, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ReadFileBytes64(HCkSFtp cHandle, const char *handle, __int64 offset, int numBytes, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ReadFileBytes64s(HCkSFtp cHandle, const char *handle, const char *offset, int numBytes, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ReadFileText(HCkSFtp cHandle, const char *handle, int numBytes, const char *charset, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_readFileText(HCkSFtp cHandle, const char *handle, int numBytes, const char *charset);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_ReadFileTextAsync(HCkSFtp cHandle, const char *handle, int numBytes, const char *charset);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ReadFileText32(HCkSFtp cHandle, const char *handle, int offset, int numBytes, const char *charset, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_readFileText32(HCkSFtp cHandle, const char *handle, int offset, int numBytes, const char *charset);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ReadFileText64(HCkSFtp cHandle, const char *handle, __int64 offset, int numBytes, const char *charset, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_readFileText64(HCkSFtp cHandle, const char *handle, __int64 offset, int numBytes, const char *charset);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ReadFileText64s(HCkSFtp cHandle, const char *handle, const char *offset, int numBytes, const char *charset, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_readFileText64s(HCkSFtp cHandle, const char *handle, const char *offset, int numBytes, const char *charset);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ReadLink(HCkSFtp cHandle, const char *path, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_readLink(HCkSFtp cHandle, const char *path);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_ReadLinkAsync(HCkSFtp cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkSFtp_RealPath(HCkSFtp cHandle, const char *originalPath, const char *composePath, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSFtp_realPath(HCkSFtp cHandle, const char *originalPath, const char *composePath);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_RealPathAsync(HCkSFtp cHandle, const char *originalPath, const char *composePath);
CK_VISIBLE_PUBLIC BOOL CkSFtp_RemoveDir(HCkSFtp cHandle, const char *path);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_RemoveDirAsync(HCkSFtp cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkSFtp_RemoveFile(HCkSFtp cHandle, const char *filename);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_RemoveFileAsync(HCkSFtp cHandle, const char *filename);
CK_VISIBLE_PUBLIC BOOL CkSFtp_RenameFileOrDir(HCkSFtp cHandle, const char *oldPath, const char *newPath);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_RenameFileOrDirAsync(HCkSFtp cHandle, const char *oldPath, const char *newPath);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ResumeDownloadFileByName(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_ResumeDownloadFileByNameAsync(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
CK_VISIBLE_PUBLIC BOOL CkSFtp_ResumeUploadFileByName(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_ResumeUploadFileByNameAsync(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SaveLastError(HCkSFtp cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SendIgnore(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SendIgnoreAsync(HCkSFtp cHandle);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SetCreateDt(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, HCkDateTime createDateTime);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SetCreateDtAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, HCkDateTime createDateTime);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SetCreateTime(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, SYSTEMTIME * createDateTime);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SetCreateTimeStr(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, const char *dateTimeStr);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SetCreateTimeStrAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, const char *dateTimeStr);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SetLastAccessDt(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, HCkDateTime accessDateTime);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SetLastAccessDtAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, HCkDateTime accessDateTime);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SetLastAccessTime(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, SYSTEMTIME * accessDateTime);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SetLastAccessTimeStr(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, const char *dateTimeStr);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SetLastAccessTimeStrAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, const char *dateTimeStr);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SetLastModifiedDt(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, HCkDateTime modifiedDateTime);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SetLastModifiedDtAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, HCkDateTime modifiedDateTime);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SetLastModifiedTime(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, SYSTEMTIME * modifiedDateTime);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SetLastModifiedTimeStr(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, const char *dateTimeStr);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SetLastModifiedTimeStrAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, const char *dateTimeStr);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SetOwnerAndGroup(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, const char *owner, const char *group);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SetOwnerAndGroupAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, const char *owner, const char *group);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SetPermissions(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, int permissions);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SetPermissionsAsync(HCkSFtp cHandle, const char *pathOrHandle, BOOL isHandle, int permissions);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SymLink(HCkSFtp cHandle, const char *oldPath, const char *newPath);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SymLinkAsync(HCkSFtp cHandle, const char *oldPath, const char *newPath);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SyncTreeDownload(HCkSFtp cHandle, const char *remoteRoot, const char *localRoot, int mode, BOOL recurse);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SyncTreeDownloadAsync(HCkSFtp cHandle, const char *remoteRoot, const char *localRoot, int mode, BOOL recurse);
CK_VISIBLE_PUBLIC BOOL CkSFtp_SyncTreeUpload(HCkSFtp cHandle, const char *localBaseDir, const char *remoteBaseDir, int mode, BOOL bRecurse);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_SyncTreeUploadAsync(HCkSFtp cHandle, const char *localBaseDir, const char *remoteBaseDir, int mode, BOOL bRecurse);
CK_VISIBLE_PUBLIC BOOL CkSFtp_UnlockComponent(HCkSFtp cHandle, const char *unlockCode);
CK_VISIBLE_PUBLIC BOOL CkSFtp_UploadBd(HCkSFtp cHandle, HCkBinData binData, const char *remoteFilePath);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_UploadBdAsync(HCkSFtp cHandle, HCkBinData binData, const char *remoteFilePath);
CK_VISIBLE_PUBLIC BOOL CkSFtp_UploadFile(HCkSFtp cHandle, const char *handle, const char *fromFilename);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_UploadFileAsync(HCkSFtp cHandle, const char *handle, const char *fromFilename);
CK_VISIBLE_PUBLIC BOOL CkSFtp_UploadFileByName(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_UploadFileByNameAsync(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
CK_VISIBLE_PUBLIC BOOL CkSFtp_UploadSb(HCkSFtp cHandle, HCkStringBuilder sb, const char *remoteFilePath, const char *charset, BOOL includeBom);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_UploadSbAsync(HCkSFtp cHandle, HCkStringBuilder sb, const char *remoteFilePath, const char *charset, BOOL includeBom);
CK_VISIBLE_PUBLIC BOOL CkSFtp_WriteFileBytes(HCkSFtp cHandle, const char *handle, HCkByteData byteData);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_WriteFileBytesAsync(HCkSFtp cHandle, const char *handle, HCkByteData byteData);
CK_VISIBLE_PUBLIC BOOL CkSFtp_WriteFileBytes32(HCkSFtp cHandle, const char *handle, int offset, HCkByteData data);
CK_VISIBLE_PUBLIC BOOL CkSFtp_WriteFileBytes64(HCkSFtp cHandle, const char *handle, __int64 offset64, HCkByteData data);
CK_VISIBLE_PUBLIC BOOL CkSFtp_WriteFileBytes64s(HCkSFtp cHandle, const char *handle, const char *offset64, HCkByteData data);
CK_VISIBLE_PUBLIC BOOL CkSFtp_WriteFileText(HCkSFtp cHandle, const char *handle, const char *charset, const char *textData);
CK_VISIBLE_PUBLIC HCkTask CkSFtp_WriteFileTextAsync(HCkSFtp cHandle, const char *handle, const char *charset, const char *textData);
CK_VISIBLE_PUBLIC BOOL CkSFtp_WriteFileText32(HCkSFtp cHandle, const char *handle, int offset32, const char *charset, const char *textData);
CK_VISIBLE_PUBLIC BOOL CkSFtp_WriteFileText64(HCkSFtp cHandle, const char *handle, __int64 offset64, const char *charset, const char *textData);
CK_VISIBLE_PUBLIC BOOL CkSFtp_WriteFileText64s(HCkSFtp cHandle, const char *handle, const char *offset64, const char *charset, const char *textData);
#endif

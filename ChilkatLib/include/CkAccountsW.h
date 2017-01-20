// CkAccountsW.h: interface for the CkAccountsW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkAccountsW_H
#define _CkAccountsW_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkWideCharBase.h"

class CkPublicKeyW;
class CkPrivateKeyW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkAccountsW
class CK_VISIBLE_PUBLIC CkAccountsW  : public CkWideCharBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkAccountsW(const CkAccountsW &);
	CkAccountsW &operator=(const CkAccountsW &);

    public:
	CkAccountsW(void);
	virtual ~CkAccountsW(void);

	static CkAccountsW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------


	// ----------------------
	// Methods
	// ----------------------
	// Deletes a named account.
	bool DeleteAccount(const wchar_t *accountName);

	// Returns the account data encrypted using rsaKey and encoded according to the
	// specified encoding (using any of the encoding modes listed at the link below). The
	// underlying algorithm used for encryption is 256-bit AES.
	bool GetEncrypted(const wchar_t *encoding, CkPublicKeyW &rsaKey, CkString &outStr);
	// Returns the account data encrypted using rsaKey and encoded according to the
	// specified encoding (using any of the encoding modes listed at the link below). The
	// underlying algorithm used for encryption is 256-bit AES.
	const wchar_t *getEncrypted(const wchar_t *encoding, CkPublicKeyW &rsaKey);
	// Returns the account data encrypted using rsaKey and encoded according to the
	// specified encoding (using any of the encoding modes listed at the link below). The
	// underlying algorithm used for encryption is 256-bit AES.
	const wchar_t *encrypted(const wchar_t *encoding, CkPublicKeyW &rsaKey);

	// Returns the account data in its unencrypted JSON format.
	bool GetJson(CkString &outStr);
	// Returns the account data in its unencrypted JSON format.
	const wchar_t *getJson(void);
	// Returns the account data in its unencrypted JSON format.
	const wchar_t *json(void);

	// Loads the account settings passed in accountData by decoding according to encoding, and
	// decrypting (using the rsaKey) . The encoding can be base64, hex, base64url, or any of
	// the binary encodings listed at the link below. The underlying algorithm used for
	// encryption is 256-bit AES.
	bool LoadEncrypted(const wchar_t *accountData, const wchar_t *encoding, CkPrivateKeyW &rsaKey);

	// Loads the account data from unencrypted JSON.
	bool LoadJson(const wchar_t *accountData);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif

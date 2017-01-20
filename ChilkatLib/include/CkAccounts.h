// CkAccounts.h: interface for the CkAccounts class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkAccounts_H
#define _CkAccounts_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkPublicKey;
class CkPrivateKey;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkAccounts
class CK_VISIBLE_PUBLIC CkAccounts  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkAccounts(const CkAccounts &);
	CkAccounts &operator=(const CkAccounts &);

    public:
	CkAccounts(void);
	virtual ~CkAccounts(void);

	static CkAccounts *createNew(void);
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
	bool DeleteAccount(const char *accountName);


	// Returns the account data encrypted using rsaKey and encoded according to the
	// specified encoding (using any of the encoding modes listed at the link below). The
	// underlying algorithm used for encryption is 256-bit AES.
	bool GetEncrypted(const char *encoding, CkPublicKey &rsaKey, CkString &outStr);

	// Returns the account data encrypted using rsaKey and encoded according to the
	// specified encoding (using any of the encoding modes listed at the link below). The
	// underlying algorithm used for encryption is 256-bit AES.
	const char *getEncrypted(const char *encoding, CkPublicKey &rsaKey);
	// Returns the account data encrypted using rsaKey and encoded according to the
	// specified encoding (using any of the encoding modes listed at the link below). The
	// underlying algorithm used for encryption is 256-bit AES.
	const char *encrypted(const char *encoding, CkPublicKey &rsaKey);


	// Returns the account data in its unencrypted JSON format.
	bool GetJson(CkString &outStr);

	// Returns the account data in its unencrypted JSON format.
	const char *getJson(void);
	// Returns the account data in its unencrypted JSON format.
	const char *json(void);


	// Loads the account settings passed in accountData by decoding according to encoding, and
	// decrypting (using the rsaKey) . The encoding can be base64, hex, base64url, or any of
	// the binary encodings listed at the link below. The underlying algorithm used for
	// encryption is 256-bit AES.
	bool LoadEncrypted(const char *accountData, const char *encoding, CkPrivateKey &rsaKey);


	// Loads the account data from unencrypted JSON.
	bool LoadJson(const char *accountData);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif

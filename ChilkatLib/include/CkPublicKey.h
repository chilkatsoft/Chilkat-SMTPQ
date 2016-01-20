// CkPublicKey.h: interface for the CkPublicKey class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkPublicKey_H
#define _CkPublicKey_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkPublicKey
class CK_VISIBLE_PUBLIC CkPublicKey  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkPublicKey(const CkPublicKey &);
	CkPublicKey &operator=(const CkPublicKey &);

    public:
	CkPublicKey(void);
	virtual ~CkPublicKey(void);

	static CkPublicKey *createNew(void);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The type of public key. Can be "empty", "rsa", "dsa", or "ecc".
	void get_KeyType(CkString &str);
	// The type of public key. Can be "empty", "rsa", "dsa", or "ecc".
	const char *keyType(void);



	// ----------------------
	// Methods
	// ----------------------
	// Gets the public key in PKCS8 DER format.
	bool GetOpenSslDer(CkByteData &outData);


	// Gets the public key in PKCS8 PEM format.
	bool GetOpenSslPem(CkString &outStr);

	// Gets the public key in PKCS8 PEM format.
	const char *getOpenSslPem(void);
	// Gets the public key in PKCS8 PEM format.
	const char *openSslPem(void);


	// Gets the public key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	bool GetPkcs1ENC(const char *encoding, CkString &outStr);

	// Gets the public key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const char *getPkcs1ENC(const char *encoding);
	// Gets the public key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const char *pkcs1ENC(const char *encoding);


	// Gets the public key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	bool GetPkcs8ENC(const char *encoding, CkString &outStr);

	// Gets the public key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const char *getPkcs8ENC(const char *encoding);
	// Gets the public key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const char *pkcs8ENC(const char *encoding);


	// Gets the public key in PKCS1 DER format.
	bool GetRsaDer(CkByteData &outData);


	// Gets the public key in XML format. The XML has this format where the key parts
	// are base64 encoded:
	// 
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>...</Exponent>
	// </RSAKeyValue>
	bool GetXml(CkString &outStr);

	// Gets the public key in XML format. The XML has this format where the key parts
	// are base64 encoded:
	// 
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>...</Exponent>
	// </RSAKeyValue>
	const char *getXml(void);
	// Gets the public key in XML format. The XML has this format where the key parts
	// are base64 encoded:
	// 
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>...</Exponent>
	// </RSAKeyValue>
	const char *xml(void);


	// Loads a public key from base64-encoded DER (can be PKCS1 or PKCS8).
	bool LoadBase64(const char *keyStr);


	// Loads a public key from in-memory PKCS8 DER formatted byte data.
	bool LoadOpenSslDer(CkByteData &data);


	// Loads a public key from an PKCS8 DER format file.
	bool LoadOpenSslDerFile(const char *path);


	// Loads a public key from an PKCS8 PEM string.
	bool LoadOpenSslPem(const char *str);


	// Loads a public key from an PKCS8 PEM file.
	bool LoadOpenSslPemFile(const char *path);


	// Loads an RSA public key from PKCS#1 PEM format.
	bool LoadPkcs1Pem(const char *str);


	// Loads a public key from in-memory PKCS1 DER formatted byte data.
	bool LoadRsaDer(CkByteData &data);


	// Loads a public key from an PKCS1 DER formatted file.
	bool LoadRsaDerFile(const char *path);


	// Loads a public key from an XML string.
	bool LoadXml(const char *xml);


	// Loads a public key from an XML file.
	bool LoadXmlFile(const char *path);


	// Saves the public key to an PKCS8 DER format file.
	bool SaveOpenSslDerFile(const char *path);


	// Saves the public key to an PKCS8 PEM format file.
	bool SaveOpenSslPemFile(const char *path);


	// Saves the public key to an PKCS1 DER format file.
	bool SaveRsaDerFile(const char *path);


	// Saves the public key to an XML file.
	bool SaveXmlFile(const char *path);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif

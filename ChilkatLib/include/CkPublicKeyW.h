// CkPublicKeyW.h: interface for the CkPublicKeyW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkPublicKeyW_H
#define _CkPublicKeyW_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkWideCharBase.h"

class CkByteData;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkPublicKeyW
class CK_VISIBLE_PUBLIC CkPublicKeyW  : public CkWideCharBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkPublicKeyW(const CkPublicKeyW &);
	CkPublicKeyW &operator=(const CkPublicKeyW &);

    public:
	CkPublicKeyW(void);
	virtual ~CkPublicKeyW(void);

	static CkPublicKeyW *createNew(void);
	

	
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
	const wchar_t *keyType(void);



	// ----------------------
	// Methods
	// ----------------------
	// Gets the public key in PKCS8 DER format.
	bool GetOpenSslDer(CkByteData &outData);

	// Gets the public key in PKCS8 PEM format.
	bool GetOpenSslPem(CkString &outStr);
	// Gets the public key in PKCS8 PEM format.
	const wchar_t *getOpenSslPem(void);
	// Gets the public key in PKCS8 PEM format.
	const wchar_t *openSslPem(void);

	// Gets the public key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	bool GetPkcs1ENC(const wchar_t *encoding, CkString &outStr);
	// Gets the public key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const wchar_t *getPkcs1ENC(const wchar_t *encoding);
	// Gets the public key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const wchar_t *pkcs1ENC(const wchar_t *encoding);

	// Gets the public key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	bool GetPkcs8ENC(const wchar_t *encoding, CkString &outStr);
	// Gets the public key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const wchar_t *getPkcs8ENC(const wchar_t *encoding);
	// Gets the public key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const wchar_t *pkcs8ENC(const wchar_t *encoding);

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
	const wchar_t *getXml(void);
	// Gets the public key in XML format. The XML has this format where the key parts
	// are base64 encoded:
	// 
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>...</Exponent>
	// </RSAKeyValue>
	const wchar_t *xml(void);

	// Loads a public key from base64-encoded DER (can be PKCS1 or PKCS8).
	bool LoadBase64(const wchar_t *keyStr);

	// Loads a public key from in-memory PKCS8 DER formatted byte data.
	bool LoadOpenSslDer(CkByteData &data);

	// Loads a public key from an PKCS8 DER format file.
	bool LoadOpenSslDerFile(const wchar_t *path);

	// Loads a public key from an PKCS8 PEM string.
	bool LoadOpenSslPem(const wchar_t *str);

	// Loads a public key from an PKCS8 PEM file.
	bool LoadOpenSslPemFile(const wchar_t *path);

	// Loads an RSA public key from PKCS#1 PEM format.
	bool LoadPkcs1Pem(const wchar_t *str);

	// Loads a public key from in-memory PKCS1 DER formatted byte data.
	bool LoadRsaDer(CkByteData &data);

	// Loads a public key from an PKCS1 DER formatted file.
	bool LoadRsaDerFile(const wchar_t *path);

	// Loads a public key from an XML string.
	bool LoadXml(const wchar_t *xml);

	// Loads a public key from an XML file.
	bool LoadXmlFile(const wchar_t *path);

	// Saves the public key to an PKCS8 DER format file.
	bool SaveOpenSslDerFile(const wchar_t *path);

	// Saves the public key to an PKCS8 PEM format file.
	bool SaveOpenSslPemFile(const wchar_t *path);

	// Saves the public key to an PKCS1 DER format file.
	bool SaveRsaDerFile(const wchar_t *path);

	// Saves the public key to an XML file.
	bool SaveXmlFile(const wchar_t *path);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif

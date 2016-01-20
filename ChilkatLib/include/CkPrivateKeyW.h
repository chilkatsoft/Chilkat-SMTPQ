// CkPrivateKeyW.h: interface for the CkPrivateKeyW class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkPrivateKeyW_H
#define _CkPrivateKeyW_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkWideCharBase.h"

class CkByteData;
class CkPublicKeyW;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkPrivateKeyW
class CK_VISIBLE_PUBLIC CkPrivateKeyW  : public CkWideCharBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkPrivateKeyW(const CkPrivateKeyW &);
	CkPrivateKeyW &operator=(const CkPrivateKeyW &);

    public:
	CkPrivateKeyW(void);
	virtual ~CkPrivateKeyW(void);

	static CkPrivateKeyW *createNew(void);
	

	
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// The bit length (strength) of the private key.
	int get_BitLength(void);

	// The type of private key. Can be "empty", "rsa", "dsa", or "ecc".
	void get_KeyType(CkString &str);
	// The type of private key. Can be "empty", "rsa", "dsa", or "ecc".
	const wchar_t *keyType(void);

	// The encryption algorithm to be used when exporting the key to encrypted PKCS8.
	// The default value is "3des". Possible choices also include "aes128", "aes192",
	// and "aes256". All of the encryption algorithm choices use CBC mode.
	void get_Pkcs8EncryptAlg(CkString &str);
	// The encryption algorithm to be used when exporting the key to encrypted PKCS8.
	// The default value is "3des". Possible choices also include "aes128", "aes192",
	// and "aes256". All of the encryption algorithm choices use CBC mode.
	const wchar_t *pkcs8EncryptAlg(void);
	// The encryption algorithm to be used when exporting the key to encrypted PKCS8.
	// The default value is "3des". Possible choices also include "aes128", "aes192",
	// and "aes256". All of the encryption algorithm choices use CBC mode.
	void put_Pkcs8EncryptAlg(const wchar_t *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Gets the private key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	bool GetPkcs1ENC(const wchar_t *encoding, CkString &outStr);
	// Gets the private key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const wchar_t *getPkcs1ENC(const wchar_t *encoding);
	// Gets the private key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const wchar_t *pkcs1ENC(const wchar_t *encoding);

	// Gets the private key in PKCS8 format.
	bool GetPkcs8(CkByteData &outData);

	// Gets the private key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	bool GetPkcs8ENC(const wchar_t *encoding, CkString &outStr);
	// Gets the private key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const wchar_t *getPkcs8ENC(const wchar_t *encoding);
	// Gets the private key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const wchar_t *pkcs8ENC(const wchar_t *encoding);

	// Writes the private key to password-protected PKCS8 format. The Pkcs8EncryptAlg
	// property controls the encryption algorithm used to encrypt.
	bool GetPkcs8Encrypted(const wchar_t *password, CkByteData &outBytes);

	// Writes the private key to password-protected PKCS8 format and returns as an
	// encoded string as specified by the ARG1 argument. The Pkcs8EncryptAlg property
	// controls the encryption algorithm used to encrypt.
	bool GetPkcs8EncryptedENC(const wchar_t *encoding, const wchar_t *password, CkString &outStr);
	// Writes the private key to password-protected PKCS8 format and returns as an
	// encoded string as specified by the ARG1 argument. The Pkcs8EncryptAlg property
	// controls the encryption algorithm used to encrypt.
	const wchar_t *getPkcs8EncryptedENC(const wchar_t *encoding, const wchar_t *password);
	// Writes the private key to password-protected PKCS8 format and returns as an
	// encoded string as specified by the ARG1 argument. The Pkcs8EncryptAlg property
	// controls the encryption algorithm used to encrypt.
	const wchar_t *pkcs8EncryptedENC(const wchar_t *encoding, const wchar_t *password);

	// Writes the private key to password-protected PKCS8 PEM format. The
	// Pkcs8EncryptAlg property controls the encryption algorithm used to encrypt.
	bool GetPkcs8EncryptedPem(const wchar_t *password, CkString &outStr);
	// Writes the private key to password-protected PKCS8 PEM format. The
	// Pkcs8EncryptAlg property controls the encryption algorithm used to encrypt.
	const wchar_t *getPkcs8EncryptedPem(const wchar_t *password);
	// Writes the private key to password-protected PKCS8 PEM format. The
	// Pkcs8EncryptAlg property controls the encryption algorithm used to encrypt.
	const wchar_t *pkcs8EncryptedPem(const wchar_t *password);

	// Gets the private key in PKCS8 PEM format.
	bool GetPkcs8Pem(CkString &outStr);
	// Gets the private key in PKCS8 PEM format.
	const wchar_t *getPkcs8Pem(void);
	// Gets the private key in PKCS8 PEM format.
	const wchar_t *pkcs8Pem(void);

	// Returns the public key portion of the private key as a public key object.
	// The caller is responsible for deleting the object returned by this method.
	CkPublicKeyW *GetPublicKey(void);

	// Gets the private key in PKCS1 DER format.
	bool GetRsaDer(CkByteData &outData);

	// Gets the private key in PKCS1 PEM format.
	bool GetRsaPem(CkString &outStr);
	// Gets the private key in PKCS1 PEM format.
	const wchar_t *getRsaPem(void);
	// Gets the private key in PKCS1 PEM format.
	const wchar_t *rsaPem(void);

	// Returns the private key in XML format. The private key is returned unencrypted
	// and the parts are base64 encoded. The XML has this structure:
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>...</Exponent>
	//   <P>...</P>
	//   <Q>...</Q>
	//   <DP>...</DP>
	//   <DQ>...</DQ>
	//   <InverseQ>...</InverseQ>
	//   <D>...</D>
	// </RSAKeyValue>
	bool GetXml(CkString &outStr);
	// Returns the private key in XML format. The private key is returned unencrypted
	// and the parts are base64 encoded. The XML has this structure:
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>...</Exponent>
	//   <P>...</P>
	//   <Q>...</Q>
	//   <DP>...</DP>
	//   <DQ>...</DQ>
	//   <InverseQ>...</InverseQ>
	//   <D>...</D>
	// </RSAKeyValue>
	const wchar_t *getXml(void);
	// Returns the private key in XML format. The private key is returned unencrypted
	// and the parts are base64 encoded. The XML has this structure:
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>...</Exponent>
	//   <P>...</P>
	//   <Q>...</Q>
	//   <DP>...</DP>
	//   <DQ>...</DQ>
	//   <InverseQ>...</InverseQ>
	//   <D>...</D>
	// </RSAKeyValue>
	const wchar_t *xml(void);

	// Loads the private key from an in-memory encrypted PEM string. An encrypted PEM
	// contains the private key in encrypted PKCS#8 format, where the data begins and
	// ends with the following tags:
	// -----BEGIN ENCRYPTED PRIVATE KEY-----
	// BASE64 ENCODED DATA
	// -----END ENCRYPTED PRIVATE KEY-----
	// 
	// For those requiring a deeper understanding: The base64 data contains ASN.1 DER
	// with the following structure:
	// EncryptedPrivateKeyInfo ::= SEQUENCE {
	//   encryptionAlgorithm  EncryptionAlgorithmIdentifier,
	//   encryptedData        EncryptedData
	// }
	// 
	// EncryptionAlgorithmIdentifier ::= AlgorithmIdentifier
	// 
	// EncryptedData ::= OCTET STRING
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadEncryptedPem(const wchar_t *pemStr, const wchar_t *password);

	// Loads a private key from an encrypted PEM file.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadEncryptedPemFile(const wchar_t *path, const wchar_t *password);

	// Loads the private key from an in-memory PEM string. If the PEM contains an
	// encrypted private key, then the LoadEncryptedPem method should instead be
	// called. This method is for loading an unencrypted private key stored in PEM
	// using PKCS#1 or PKCS#8.
	// 
	// A private key stored in PKCS#1 format begins and ends with the tags:
	// -----BEGIN RSA PRIVATE KEY-----
	// BASE64 ENCODED DATA
	// -----END RSA PRIVATE KEY-----
	// 
	// For those requiring a deeper understanding, the PKCS1 base64 contains ASN.1 in
	// DER encoding with the following structure:
	// RSAPrivateKey ::= SEQUENCE {
	//   version           Version,
	//   modulus           INTEGER,  -- n
	//   publicExponent    INTEGER,  -- e
	//   privateExponent   INTEGER,  -- d
	//   prime1            INTEGER,  -- p
	//   prime2            INTEGER,  -- q
	//   exponent1         INTEGER,  -- d mod (p-1)
	//   exponent2         INTEGER,  -- d mod (q-1)
	//   coefficient       INTEGER,  -- (inverse of q) mod p
	//   otherPrimeInfos   OtherPrimeInfos OPTIONAL
	// }
	// 
	// A private key stored in PKCS#8 format begins and ends with the tags:
	// -----BEGIN PRIVATE KEY-----
	// BASE64 ENCODED DATA
	// -----END PRIVATE KEY-----
	// 
	// For those requiring a deeper understanding, the PKCS8 base64 contains ASN.1 in
	// DER encoding with the following structure:
	// PrivateKeyInfo ::= SEQUENCE {
	//   version         Version,
	//   algorithm       AlgorithmIdentifier,
	//   PrivateKey      BIT STRING
	// }
	// 
	// AlgorithmIdentifier ::= SEQUENCE {
	//   algorithm       OBJECT IDENTIFIER,
	//   parameters      ANY DEFINED BY algorithm OPTIONAL
	// }
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadPem(const wchar_t *str);

	// Loads a private key from a PEM file.
	bool LoadPemFile(const wchar_t *path);

	// Loads a private key from in-memory PKCS8 byte data.
	// 
	// For those requiring a deeper understanding, the PKCS8 contains ASN.1 in DER
	// encoding with the following structure:
	// PrivateKeyInfo ::= SEQUENCE {
	//   version         Version,
	//   algorithm       AlgorithmIdentifier,
	//   PrivateKey      BIT STRING
	// }
	// 
	// AlgorithmIdentifier ::= SEQUENCE {
	//   algorithm       OBJECT IDENTIFIER,
	//   parameters      ANY DEFINED BY algorithm OPTIONAL
	// }
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadPkcs8(CkByteData &data);

	// Loads a private key from in-memory password-protected PKCS8 byte data.
	// 
	// For those requiring a deeper understanding, the encrypted PKCS8 contains ASN.1
	// in DER encoding with the following structure:
	// EncryptedPrivateKeyInfo ::= SEQUENCE {
	//   encryptionAlgorithm  EncryptionAlgorithmIdentifier,
	//   encryptedData        EncryptedData
	// }
	// 
	// EncryptionAlgorithmIdentifier ::= AlgorithmIdentifier
	// 
	// EncryptedData ::= OCTET STRING
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadPkcs8Encrypted(CkByteData &data, const wchar_t *password);

	// Loads a private key from an encrypted PKCS8 file.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadPkcs8EncryptedFile(const wchar_t *path, const wchar_t *password);

	// Loads a private key from a PKCS8 file.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadPkcs8File(const wchar_t *path);

#if defined(CK_CRYPTOAPI_INCLUDED)
	// Loads a private key from in-memory PVK byte data.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadPvk(CkByteData &data, const wchar_t *password);
#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	// Loads a private key from a PVK format file.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadPvkFile(const wchar_t *path, const wchar_t *password);
#endif

	// Loads a private key from in-memory RSA PKCS#1 DER byte data.
	// 
	// For those requiring a deeper understanding, the PKCS1 contains ASN.1 in DER
	// encoding with the following structure:
	// RSAPrivateKey ::= SEQUENCE {
	//   version           Version,
	//   modulus           INTEGER,  -- n
	//   publicExponent    INTEGER,  -- e
	//   privateExponent   INTEGER,  -- d
	//   prime1            INTEGER,  -- p
	//   prime2            INTEGER,  -- q
	//   exponent1         INTEGER,  -- d mod (p-1)
	//   exponent2         INTEGER,  -- d mod (q-1)
	//   coefficient       INTEGER,  -- (inverse of q) mod p
	//   otherPrimeInfos   OtherPrimeInfos OPTIONAL
	// }
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadRsaDer(CkByteData &data);

	// Loads a private key from an RSA DER format file.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadRsaDerFile(const wchar_t *path);

	// Loads a private key from an in-memory XML string. The RSA private key in XML has
	// this format:
	// <RSAKeyValue>
	//   <Modulus>...</Modulus>
	//   <Exponent>...</Exponent>
	//   <P>...</P>
	//   <Q>...</Q>
	//   <DP>...</DP>
	//   <DQ>...</DQ>
	//   <InverseQ>...</InverseQ>
	//   <D>...</D>
	// </RSAKeyValue>
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadXml(const wchar_t *xml);

	// Loads a private key from an XML file.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadXmlFile(const wchar_t *path);

	// Saves the private key to a password-protected PKCS8 format file. The
	// Pkcs8EncryptAlg property controls the encryption algorithm used to encrypt.
	bool SavePkcs8EncryptedFile(const wchar_t *password, const wchar_t *path);

	// Saves the private key to a password-protected PKCS8 PEM format file. The
	// Pkcs8EncryptAlg property controls the encryption algorithm used to encrypt.
	bool SavePkcs8EncryptedPemFile(const wchar_t *password, const wchar_t *path);

	// Saves the private key to a PKCS8 format file.
	bool SavePkcs8File(const wchar_t *path);

	// Saves the private key to a PKCS8 PEM format file.
	bool SavePkcs8PemFile(const wchar_t *path);

	// Saves the private key to a PKCS1 DER format file.
	bool SaveRsaDerFile(const wchar_t *path);

	// Saves the private key to a PKCS1 PEM format file.
	bool SaveRsaPemFile(const wchar_t *path);

	// Saves the private key to an XML file.
	bool SaveXmlFile(const wchar_t *path);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif

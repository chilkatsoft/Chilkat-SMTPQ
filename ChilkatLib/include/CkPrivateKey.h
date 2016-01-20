// CkPrivateKey.h: interface for the CkPrivateKey class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkPrivateKey_H
#define _CkPrivateKey_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkByteData;
class CkPublicKey;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkPrivateKey
class CK_VISIBLE_PUBLIC CkPrivateKey  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkPrivateKey(const CkPrivateKey &);
	CkPrivateKey &operator=(const CkPrivateKey &);

    public:
	CkPrivateKey(void);
	virtual ~CkPrivateKey(void);

	static CkPrivateKey *createNew(void);
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
	const char *keyType(void);

	// The encryption algorithm to be used when exporting the key to encrypted PKCS8.
	// The default value is "3des". Possible choices also include "aes128", "aes192",
	// and "aes256". All of the encryption algorithm choices use CBC mode.
	void get_Pkcs8EncryptAlg(CkString &str);
	// The encryption algorithm to be used when exporting the key to encrypted PKCS8.
	// The default value is "3des". Possible choices also include "aes128", "aes192",
	// and "aes256". All of the encryption algorithm choices use CBC mode.
	const char *pkcs8EncryptAlg(void);
	// The encryption algorithm to be used when exporting the key to encrypted PKCS8.
	// The default value is "3des". Possible choices also include "aes128", "aes192",
	// and "aes256". All of the encryption algorithm choices use CBC mode.
	void put_Pkcs8EncryptAlg(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Gets the private key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	bool GetPkcs1ENC(const char *encoding, CkString &outStr);

	// Gets the private key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const char *getPkcs1ENC(const char *encoding);
	// Gets the private key in PKCS1 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const char *pkcs1ENC(const char *encoding);


	// Gets the private key in PKCS8 format.
	bool GetPkcs8(CkByteData &outData);


	// Gets the private key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	bool GetPkcs8ENC(const char *encoding, CkString &outStr);

	// Gets the private key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const char *getPkcs8ENC(const char *encoding);
	// Gets the private key in PKCS8 format and returns in an encoded string, as
	// specified by the ARG1 argument.
	const char *pkcs8ENC(const char *encoding);


	// Writes the private key to password-protected PKCS8 format. The Pkcs8EncryptAlg
	// property controls the encryption algorithm used to encrypt.
	bool GetPkcs8Encrypted(const char *password, CkByteData &outBytes);


	// Writes the private key to password-protected PKCS8 format and returns as an
	// encoded string as specified by the ARG1 argument. The Pkcs8EncryptAlg property
	// controls the encryption algorithm used to encrypt.
	bool GetPkcs8EncryptedENC(const char *encoding, const char *password, CkString &outStr);

	// Writes the private key to password-protected PKCS8 format and returns as an
	// encoded string as specified by the ARG1 argument. The Pkcs8EncryptAlg property
	// controls the encryption algorithm used to encrypt.
	const char *getPkcs8EncryptedENC(const char *encoding, const char *password);
	// Writes the private key to password-protected PKCS8 format and returns as an
	// encoded string as specified by the ARG1 argument. The Pkcs8EncryptAlg property
	// controls the encryption algorithm used to encrypt.
	const char *pkcs8EncryptedENC(const char *encoding, const char *password);


	// Writes the private key to password-protected PKCS8 PEM format. The
	// Pkcs8EncryptAlg property controls the encryption algorithm used to encrypt.
	bool GetPkcs8EncryptedPem(const char *password, CkString &outStr);

	// Writes the private key to password-protected PKCS8 PEM format. The
	// Pkcs8EncryptAlg property controls the encryption algorithm used to encrypt.
	const char *getPkcs8EncryptedPem(const char *password);
	// Writes the private key to password-protected PKCS8 PEM format. The
	// Pkcs8EncryptAlg property controls the encryption algorithm used to encrypt.
	const char *pkcs8EncryptedPem(const char *password);


	// Gets the private key in PKCS8 PEM format.
	bool GetPkcs8Pem(CkString &outStr);

	// Gets the private key in PKCS8 PEM format.
	const char *getPkcs8Pem(void);
	// Gets the private key in PKCS8 PEM format.
	const char *pkcs8Pem(void);


	// Returns the public key portion of the private key as a public key object.
	// The caller is responsible for deleting the object returned by this method.
	CkPublicKey *GetPublicKey(void);


	// Gets the private key in PKCS1 DER format.
	bool GetRsaDer(CkByteData &outData);


	// Gets the private key in PKCS1 PEM format.
	bool GetRsaPem(CkString &outStr);

	// Gets the private key in PKCS1 PEM format.
	const char *getRsaPem(void);
	// Gets the private key in PKCS1 PEM format.
	const char *rsaPem(void);


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
	const char *getXml(void);
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
	const char *xml(void);


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
	bool LoadEncryptedPem(const char *pemStr, const char *password);


	// Loads a private key from an encrypted PEM file.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadEncryptedPemFile(const char *path, const char *password);


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
	bool LoadPem(const char *str);


	// Loads a private key from a PEM file.
	bool LoadPemFile(const char *path);


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
	bool LoadPkcs8Encrypted(CkByteData &data, const char *password);


	// Loads a private key from an encrypted PKCS8 file.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadPkcs8EncryptedFile(const char *path, const char *password);


	// Loads a private key from a PKCS8 file.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadPkcs8File(const char *path);


#if defined(CK_CRYPTOAPI_INCLUDED)
	// Loads a private key from in-memory PVK byte data.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadPvk(CkByteData &data, const char *password);

#endif

#if defined(CK_CRYPTOAPI_INCLUDED)
	// Loads a private key from a PVK format file.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadPvkFile(const char *path, const char *password);

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
	bool LoadRsaDerFile(const char *path);


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
	bool LoadXml(const char *xml);


	// Loads a private key from an XML file.
	// 
	// Note: Each of the private key Load* methods willl auto-recognize the content and
	// will parse appropriately. The private key should be successfully loaded even
	// when the wrong format data is passed to the wrong method.
	// 
	bool LoadXmlFile(const char *path);


	// Saves the private key to a password-protected PKCS8 format file. The
	// Pkcs8EncryptAlg property controls the encryption algorithm used to encrypt.
	bool SavePkcs8EncryptedFile(const char *password, const char *path);


	// Saves the private key to a password-protected PKCS8 PEM format file. The
	// Pkcs8EncryptAlg property controls the encryption algorithm used to encrypt.
	bool SavePkcs8EncryptedPemFile(const char *password, const char *path);


	// Saves the private key to a PKCS8 format file.
	bool SavePkcs8File(const char *path);


	// Saves the private key to a PKCS8 PEM format file.
	bool SavePkcs8PemFile(const char *path);


	// Saves the private key to a PKCS1 DER format file.
	bool SaveRsaDerFile(const char *path);


	// Saves the private key to a PKCS1 PEM format file.
	bool SaveRsaPemFile(const char *path);


	// Saves the private key to an XML file.
	bool SaveXmlFile(const char *path);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif

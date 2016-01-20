// CkBinData.h: interface for the CkBinData class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkBinData_H
#define _CkBinData_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"




#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkBinData
class CK_VISIBLE_PUBLIC CkBinData  : public CkMultiByteBase
{
    private:
	

	// Don't allow assignment or copying these objects.
	CkBinData(const CkBinData &);
	CkBinData &operator=(const CkBinData &);

    public:
	CkBinData(void);
	virtual ~CkBinData(void);

	static CkBinData *createNew(void);
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




	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif

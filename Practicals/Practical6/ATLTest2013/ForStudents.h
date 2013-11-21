// ForStudents.h : Declaration of the CForStudents

#ifndef __FORSTUDENTS_H_
#define __FORSTUDENTS_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CForStudents
class ATL_NO_VTABLE CForStudents : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CForStudents, &CLSID_ForStudents>,
	public IDispatchImpl<IForStudents, &IID_IForStudents, &LIBID_ATLTEST2013Lib>
{
public:
	CForStudents():V(1.0)
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_FORSTUDENTS)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CForStudents)
	COM_INTERFACE_ENTRY(IForStudents)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()

// IForStudents
public:
	STDMETHOD(get_Val)(/*[out, retval]*/ double *pVal);
	STDMETHOD(put_Val)(/*[in]*/ double newVal);
	STDMETHOD(Test2013)();
private:
	double V;
};

#endif //__FORSTUDENTS_H_

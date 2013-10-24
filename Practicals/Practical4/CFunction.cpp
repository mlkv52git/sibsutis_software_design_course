#include <windows.h>
#include <objbase.h>
#include <stdio.h>
#include "guid.h"
#include "CFunction.h"

ULONG g_cObj=0;
ULONG g_cLock=0;

//////////////////CFunction///////////////////////////
STDMETHODIMP
CFunction::QueryInterface(REFIID iid, void** ppv)
{
	if (iid == IID_IUnknown) 
		*ppv = (IFunction*) this;
	else if (iid == IID_IFunction)
		*ppv = (IFunction*) this;
	else if (iid == IID_ISerialization)
		*ppv = (ISerialization*) this;
	else 
	{
		*ppv = NULL;
		return E_NOINTERFACE;
	}
	AddRef();
	return NOERROR;
}

STDMETHODIMP_(ULONG) CFunction::AddRef()
{
	return ++m_nRef;
}

STDMETHODIMP_(ULONG) CFunction::Release()
{
	if(--m_nRef == 0)
	{
		--g_cObj;
		delete this;
		printf("Object destroyed\n");
		return 0;
	} 
 	return m_nRef;
}


STDMETHODIMP CFunction::getValue(double* pd){ *pd = d;  printf("It throws out %g\n", d); return S_OK; }
STDMETHODIMP CFunction::setValue(double D){ d = D; printf("It swallows %g\n", d); return S_OK; }

STDMETHODIMP CFunction::Load(){
  printf("It loads data\n"); return S_OK;
}

STDMETHODIMP CFunction::Store(){
	printf("It stores data\n"); return S_OK;
}



////////////FACTORY////////////////////
STDMETHODIMP 
CFunctionClassFactory::QueryInterface(REFIID riid, void** ppv)
{
    *ppv = NULL;

    if (IID_IUnknown == riid || IID_IClassFactory == riid)
        *ppv = this;

    if (NULL != *ppv)
    {
        ((LPUNKNOWN)*ppv)->AddRef();
        return NOERROR;
    }

    return E_NOINTERFACE;
}

STDMETHODIMP_(ULONG) CFunctionClassFactory::AddRef()
{
    return ++m_nRef;
}


STDMETHODIMP_(ULONG) CFunctionClassFactory::Release()
{
	if(--m_nRef == 0)
	{
		delete this;
		return 0;
	} 
 	return m_nRef;
}

STDMETHODIMP 
CFunctionClassFactory::CreateInstance(LPUNKNOWN pUnkOuter,
   		 REFIID riid, void** ppvObj)
{
	CFunction* pObj;
    HRESULT hr;

    *ppvObj = NULL;
    hr = E_OUTOFMEMORY;

    if (NULL != pUnkOuter)
        return CLASS_E_NOAGGREGATION;

	pObj = new CFunction;

    if (NULL == pObj)
        return hr;

    hr = pObj->QueryInterface(riid, ppvObj);

    if (FAILED(hr))
        delete pObj;
    else
	{
        g_cObj++;
	}

    return hr;
}

STDMETHODIMP CFunctionClassFactory::LockServer(BOOL fLock)
{
    if (fLock)
        g_cLock++;
    else
        g_cLock--;

    return NOERROR;
}

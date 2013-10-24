#include <windows.h>
#include <objbase.h>
#include <stdio.h>
#include "guid.h"
#include "CFunction.h"

extern ULONG g_cObj;
extern ULONG g_cLock;

/////////////////////////////////////////////////////////////////////////////
// DLL Entry Point

extern "C"
BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID /*lpReserved*/)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		printf("Library loaded via Wow6432Node\n");
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		printf("Library unloaded\n");
	}
	return TRUE;    // ok
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, void** ppv)
{
    HRESULT hr;
    CFunctionClassFactory *pObj;

    if (CLSID_IFunction != rclsid)
        return E_FAIL;

    pObj = new CFunctionClassFactory();

    if (NULL==pObj)
        return E_OUTOFMEMORY;

    hr=pObj->QueryInterface(riid, ppv);

    if (FAILED(hr))
        delete pObj;

    return hr;
}

STDAPI DllCanUnloadNow()
{
	// Can unload if there are no objects and no locks
    SCODE   sc;
	if (g_cObj == 0 && g_cLock == 0)
		sc = S_OK;
	else
		sc = S_FALSE;

    return sc;
}

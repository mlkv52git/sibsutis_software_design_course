#include <windows.h>
#include <stdio.h>
#include <objbase.h>
#include "guid.h"
#include "root.h"

int main(){
	IClassFactory*  pcf=NULL;
	IFunction* pii=NULL;
    ISerialization* pif=NULL;	
	DWORD dwContext =
			CLSCTX_INPROC_SERVER | CLSCTX_LOCAL_SERVER;

	CoInitialize(NULL);

	HRESULT hr = CoGetClassObject(
			CLSID_IFunction,
			dwContext,
			NULL,
			IID_IClassFactory,
			(void**) &pcf);
	pcf->LockServer(TRUE);
	pcf->CreateInstance(NULL, IID_IFunction, (void**)&pii);
	
	pii->setValue(3.141592);
	double d;
	pii->getValue(&d);
	printf("It's thrown out %g\n", d);


	pii->QueryInterface(IID_ISerialization, (void**)&pif);

    pif->Load();
    pif->Store();


	pii->Release();
	pif->Release();

	pcf->LockServer(FALSE);
	pcf->Release();

	CoUninitialize();
  return 0;
}
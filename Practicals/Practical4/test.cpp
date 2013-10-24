#include <windows.h>
#include <stdio.h>
#include <objbase.h>
#include "guid.h"
#include "root.h"

int main(){
	IFunction* pif=NULL;
    ISerialization* pii=NULL;	
	DWORD dwContext =
			CLSCTX_INPROC_SERVER | CLSCTX_LOCAL_SERVER;

	CoInitialize(NULL);
	HRESULT hr = CoCreateInstance(
			CLSID_IFunction,
			NULL,
			dwContext,
			IID_IFunction,
			(void**) &pif);

	if(!hr){
	pif->setValue(3.141592);
	double d;
	pif->getValue(&d);
	printf("It's thrown out %g\n",d);

	  hr=pif->QueryInterface(IID_ISerialization, (void**)&pii);
          pii->Load();
          pii->Store();
	}
	else{
          printf("CoCreateInstance %i  %x\n", hr, hr);
        }
	pii->Release();
	pif->Release();
	CoUninitialize();
  return 0;
}
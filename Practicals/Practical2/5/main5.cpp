#include <cstdio>
#include "IFunction.h"
#include "ISerialization.h"
extern "C" __declspec(dllimport) IFunction* CreateObject();

int main(){
	IFunction* pif=CreateObject();
	ISerialization* pis=dynamic_cast<ISerialization*>(pif);
	
	pif->setValue(3.145192);
	
	pis->Store();
	pis->Load();

	printf("Get %g\n", pif->getValue());

	pis->Delete();
	return 0;
}
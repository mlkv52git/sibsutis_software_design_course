#include <cstdio>
#include "intfc.h"
extern "C" __declspec(dllimport) IFunction* CreateObject();

int main(){
	IFunction* pif=CreateObject();
	ISerialization* pis=(ISerialization*)pif->DynamicCast("ISerialization");
	
	pif->setValue(3.145192);
	
	pis->Store();
	pis->Load();
	pis->FreePointer();
	
	printf("Get %g\n", pif->getValue());
	pif->FreePointer();

	return 0;
}
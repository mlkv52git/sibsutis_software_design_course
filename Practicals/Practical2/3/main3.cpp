#include <cstdio>
#include "IFunction.h"
extern "C" __declspec(dllimport) IFunction* CreateObject();
extern "C" __declspec(dllimport) void DeleteObject(IFunction*);
int main(){
	IFunction* pif=CreateObject();

	pif->setValue(3.145192);
	printf("%g\n", pif->getValue());
	
	DeleteObject(pif);
	return 0;
}
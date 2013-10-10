#include <windows.h>
#include <cstdio>
#include "IFunction.h"

int main(){
	IFunction* pif;
	HINSTANCE hInst;
	IFunction* (*create_object)();
	void (*delete_object)(IFunction*);

	hInst=LoadLibrary("CFunction.dll");
	create_object=(IFunction* (*)())GetProcAddress(hInst,"CreateObject");
	delete_object=(void (*)(IFunction*))GetProcAddress(hInst,"DeleteObject");
	
	pif=create_object();

	pif->setValue(28.70);
	printf("%g\n", pif->getValue());
	
	delete_object(pif);
	FreeLibrary(hInst);
	return 0;
}
#include "CFunction.h"
#include <iostream>
using namespace std;

double CFunction::getValue(){
	return value;
}

void CFunction::setValue(double v){
	value=v;
}

void CFunction::Store(){
	cout<<"We stored: "<<value<<endl;
}

void CFunction::Load(){
	cin>>value;
}

void* CFunction::DynamicCast(char* intfc_type){
	void* pib=0;
	if (strcmp(intfc_type, "IFunction") == 0) 
        pib=static_cast<IFunction*>(this); 
    else if (strcmp(intfc_type, "ISerialization") == 0) 
        pib=static_cast<ISerialization*>(this);
	else 
		return 0;

	((IBase*)pib)->AddRef();
	return pib;
}

void CFunction::AddRef(){
	ref_counter++;
}

void CFunction::FreePointer(){
	if(--ref_counter==0)
		delete this;
}

extern "C" __declspec(dllexport) IFunction* CreateObject(){
	IFunction* pif=new CFunction;
    if(pif)
		pif->AddRef();
	return pif;
}
#include "CFunction.h"
#include <iostream>
using namespace std;

double CFunction::getValue(){
	return value;
}

void CFunction::setValue(double v){
	value=v;
}

void CFunction::Delete(){
	delete this;
}

void CFunction::Store(){
	cout<<"We stored: "<<value<<endl;
}

void CFunction::Load(){
	cin>>value;
}

void* CFunction::DynamicCast(char* intfc_type){
	if (strcmp(intfc_type, "IFunction") == 0) 
        return static_cast<IFunction*>(this); 
    else if (strcmp(intfc_type, "ISerialization") == 0) 
        return static_cast<ISerialization*>(this);
	else 
		return 0;
}

extern "C" __declspec(dllexport) IFunction* CreateObject(IFunction* pif){
	return new CFunction;
}
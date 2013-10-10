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


extern "C" __declspec(dllexport) IFunction* CreateObject(IFunction* pif){
	return new CFunction;
}
extern "C" __declspec(dllexport) void DeleteObject(IFunction* pif){
  delete pif;
}
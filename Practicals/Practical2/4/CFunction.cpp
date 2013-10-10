#include "CFunction.h"

double CFunction::getValue(){
	return value;
}

void CFunction::setValue(double v){
	value=v;
}

extern "C" __declspec(dllexport) IFunction* CreateObject(IFunction* pif){
	return new CFunction;
}
extern "C" __declspec(dllexport) void DeleteObject(IFunction* pif){
  delete pif;
}
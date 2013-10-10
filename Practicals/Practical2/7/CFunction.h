#include "intfc.h"

class CFunction : public IFunction, public ISerialization{
public:
	CFunction():ref_counter(0){}
	double getValue();
	void setValue(double);
	void Load();
	void Store();
	void* DynamicCast(char*);
	void AddRef();
	void FreePointer();
private:
	double value;
	int ref_counter;
};
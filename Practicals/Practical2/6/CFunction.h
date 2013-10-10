#include "intfc.h"

class CFunction : public IFunction, public ISerialization{
public:
	double getValue();
	void setValue(double);
	void Delete();
	void Load();
	void Store();
	void* DynamicCast(char*);
private:
	double value;
};
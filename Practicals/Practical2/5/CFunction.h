#include "IFunction.h"
#include "ISerialization.h"

class CFunction : public IFunction, public ISerialization{
public:
	double getValue();
	void setValue(double);
	void Delete();
	void Load();
	void Store();
private:
	double value;
};
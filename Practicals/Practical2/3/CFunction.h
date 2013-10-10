#include "IFunction.h"

class CFunction : public IFunction{
public:
	double getValue();
	void setValue(double);
private:
	double value;
};
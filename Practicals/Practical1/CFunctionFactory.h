/*
 * CFunctionFactory.h
 *
 *  Created on: Sep 25, 2013
 *      Author: ewgenij
 */

#ifndef CFUNCTIONFACTORY_H_
#define CFUNCTIONFACTORY_H_
#include "IFunction.h"

class CFunctionFactory {
public:
	CFunctionFactory();
	virtual ~CFunctionFactory();
	virtual IFunction* CreateFunction(int I, int J, int K, float xmin, float xmax);
};

#endif /* CFUNCTIONFACTORY_H_ */

/*
 * CFiniteDifferenceFactory.h
 *
 *  Created on: Sep 25, 2013
 *      Author: ewgenij
 */

#ifndef CFINITEDIFFERENCEFACTORY_H_
#define CFINITEDIFFERENCEFACTORY_H_
#include "IFiniteDifferenceFactory.h"
//#include "IFiniteDifference.h"

class CFiniteDifferenceFactory : public IFiniteDifferenceFactory{
public:
	//CFiniteDifferenceFactory();
	//virtual ~CFiniteDifferenceFactory();
	virtual IFiniteDifference* CreateFunction();
};

#endif /* CFINITEDIFFERENCEFACTORY_H_ */

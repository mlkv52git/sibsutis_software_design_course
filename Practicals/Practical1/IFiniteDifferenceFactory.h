/*
 * IFiniteDifferenceFactory.h
 *
 *  Created on: Sep 25, 2013
 *      Author: ewgenij
 */

#ifndef IFINITEDIFFERENCEFACTORY_H_
#define IFINITEDIFFERENCEFACTORY_H_
#include "IFiniteDifference.h"

class IFiniteDifferenceFactory {
public:
	//IFiniteDifferenceFactory();
	//virtual ~IFiniteDifferenceFactory();
	virtual IFiniteDifference* CreateFunction()=0;
};

#endif /* IFINITEDIFFERENCEFACTORY_H_ */

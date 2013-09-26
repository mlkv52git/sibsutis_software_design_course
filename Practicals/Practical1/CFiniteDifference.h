/*
 * CFiniteDifference.h
 *
 *  Created on: Sep 25, 2013
 *      Author: ewgenij
 */

#ifndef CFINITEDIFFERENCE_H_
#define CFINITEDIFFERENCE_H_

#include "IFiniteDifference.h"

class CFiniteDifference : public IFiniteDifference {
public:
	CFiniteDifference();
	virtual ~CFiniteDifference();
private:
	virtual IFunction& CalcFiniteDifference(IFunction& df){
		return 2.0*df;
	}
};

#endif /* CFINITEDIFFERENCE_H_ */

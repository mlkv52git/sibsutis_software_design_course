/*
 * IFiniteDifference.h
 *
 *  Created on: Sep 25, 2013
 *      Author: ewgenij
 */

#ifndef IFINITEDIFFERENCE_H_
#define IFINITEDIFFERENCE_H_

#include "IFunction.h"

class IFiniteDifference {
public:
	//IFiniteDifference();
	//virtual ~IFiniteDifference();
	IFunction& operator()(IFunction& df){
		df=CalcFiniteDifference(df);
		return df;
	}
private:
	virtual IFunction& CalcFiniteDifference(IFunction& df)=0;
};

#endif /* IFINITEDIFFERENCE_H_ */

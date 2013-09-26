/*
 * CFiniteDifferenceFactory.cpp
 *
 *  Created on: Sep 25, 2013
 *      Author: ewgenij
 */

#include "CFiniteDifferenceFactory.h"
#include "CFiniteDifference.h"

/*
CFiniteDifferenceFactory::CFiniteDifferenceFactory()
{
	// TODO Auto-generated constructor stub

}

CFiniteDifferenceFactory::~CFiniteDifferenceFactory()
{
	// TODO Auto-generated destructor stub
}
*/
IFiniteDifference* CFiniteDifferenceFactory::CreateFunction(){
	return new CFiniteDifference;
}

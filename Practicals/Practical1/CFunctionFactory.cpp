/*
 * CFunctionFactory.cpp
 *
 *  Created on: Sep 25, 2013
 *      Author: ewgenij
 */

#include "CFunctionFactory.h"
#include "CFunction.h"

CFunctionFactory::CFunctionFactory()
{
	// TODO Auto-generated constructor stub

}

CFunctionFactory::~CFunctionFactory()
{
	// TODO Auto-generated destructor stub
}

IFunction* CFunctionFactory::CreateFunction(int I, int J, int K, float xmin, float xmax){
	return new CFunction(I, J, K, xmin, xmax);
}

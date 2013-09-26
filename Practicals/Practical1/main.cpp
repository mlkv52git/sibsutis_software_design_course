/*
 * main.cpp
 *
 *  Created on: Sep 25, 2013
 *      Author: ewgenij
 */
#include "IFunction.h"
#include "IFiniteDifference.h"
#include "CFunctionFactory.h"
#include "CFiniteDifferenceFactory.h"

int main(){
	int I,J,K;
	float xmin=-1.0, xmax=1.0;
	I=J=K=32;

	IFunction* pdf;
	CFunctionFactory dfF;
	pdf=dfF.CreateFunction(I,J,K,xmin,xmax);
	IFunction& df=*pdf;

	IFiniteDifference* pD;
	CFiniteDifferenceFactory fdF;
	pD=fdF.CreateFunction();
	IFiniteDifference& D=*pD;


	float tau=0.01;

	df=tau*D(df);

	cout<<df;
	return 0;
}



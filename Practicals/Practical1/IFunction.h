/*
 * IFunction.h
 *
 *  Created on: Sep 25, 2013
 *      Author: ewgenij
 */

#ifndef IFUNCTION_H_
#define IFUNCTION_H_
#include <iostream>
using namespace std;

class IFunction {
public:
	//IFunction();
	//virtual ~IFunction();
	virtual float* AllocateMemory(int numberOfNodes)=0;
	virtual void FreeMemory()=0;
	virtual void SetNode(int I, float d)=0;
	virtual float GetNode(int I)=0;
	virtual float& GetStorage()=0;
	virtual void InitializeStorage()=0;
	virtual void TransposeStorage()=0;

	virtual IFunction& operator=(IFunction&)=0;
	virtual IFunction& operator*(float)=0;
	friend IFunction& operator*(float tau, IFunction& df){
		return df*tau;
	}
	virtual IFunction& operator+(IFunction&)=0;
	virtual IFunction& operator+=(IFunction&)=0;
	virtual IFunction& operator*=(float)=0;


	friend ostream& operator<<(ostream& os, IFunction& df){
		df.OutputStorage(os);
		return os;
	}
private:
	virtual void OutputStorage(ostream& os)=0;
};

#endif /* IFUNCTION_H_ */

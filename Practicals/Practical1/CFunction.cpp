/*
 * CFunction.cpp
 *
 *  Created on: Sep 25, 2013
 *      Author: ewgenij
 */

#include "CFunction.h"

    CFunction::CFunction(int I, int J, int K, float xmin, float xmax):
		          I(I),  J(J),  K(K),    xmin(xmin), xmax(xmax){
    	AllocateMemory(I*J*K);
    	InitializeStorage();
    }

void CFunction::InitializeStorage(){
	int i,j,k;
	float h=(xmax-xmin)/I;
	float t;
	float x, y, z;

    for(i=0, x=xmin;i<I; x+=h, i++)
	 for(j=0, y=xmin; j<J; y+=h, j++)
	  for(k=0, z=xmin; k<K; z+=h, k++)
		storage[k+j*K+i*K*J]=Normal(x,y,z);
}

void CFunction::TransposeStorage(){}

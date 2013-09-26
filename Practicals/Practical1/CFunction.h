/*
 * CFunction.h
 *
 *  Created on: Sep 25, 2013
 *      Author: ewgenij
 */

#ifndef CFUNCTION_H_
#define CFUNCTION_H_

#include "IFunction.h"
#include <cmath>
using namespace std;

class CFunction : public IFunction {
public:
	CFunction(int I, int J, int K, float xmin, float xmax);
	virtual ~CFunction(){
				FreeMemory();
			};

	float* AllocateMemory(int numberOfNodes){
		N=numberOfNodes;
		storage=new float[numberOfNodes*sizeof(float)];
		return storage;
	}
	virtual void FreeMemory(){
		delete storage;
	}

	void SetNode(int I,float d){storage[I]=d;}
	float GetNode(int I){return storage[I];}

	float& GetStorage(){
		return *storage;
	}

	void InitializeStorage();
	void TransposeStorage();

	virtual IFunction& operator=(IFunction& df){
		for(int i=0;i<N;i++){
			storage[i]=df.GetNode(i);
		}
		return *this;
	}

	virtual IFunction& operator+(IFunction& df){
		for(int i=0;i<N;i++){
			storage[i]+=df.GetNode(i);
		}
		return *this;
	}

	virtual IFunction& operator*(float tau){
		for(int i=0;i<N;i++){
			storage[i]*=tau;
		}
		return *this;
	}

	IFunction& operator+=(IFunction& df){
		for(int i=0;i<N;i++){
			storage[i]+=df.GetNode(i);
		}
		return *this;
	}

	IFunction& operator*=(float tau){
		for(int i=0;i<N;i++){
			storage[i]*=tau;
		}
		return *this;
	}

private:
	float* storage;
	int N;
	int I,J,K,L;
	float xmin, xmax;
	void OutputStorage(ostream& os){
		  for(int i=0;i<I; i++)
			//for(int j=0;j<J; j++)
			  for(int k=0;k<K; k++)
				//cout<<i<<'\t'<<j<<'\t'<<k<<'\t'<<storage[k+j*K+i*K*J]<<endl;
				  cout<<i<<'\t'<<k<<'\t'<<storage[k+(J/2)*K+i*K*J]<<endl;
	}

inline float Normal(float x,float y, float z){
		const float PI=3.14159265358979323846;
		const float T=0.1f;
		const float x0=(xmax+xmin)/2.0+0.1*(xmax-xmin);
		return
		exp( -( (x-x0)*(x-x0)+y*y+z*z )/2.0/T)/pow(2.0*PI*T, 1.5);
	}
};

#endif /* CFUNCTION_H_ */

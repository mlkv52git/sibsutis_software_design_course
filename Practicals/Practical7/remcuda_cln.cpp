#include "soapremcudaProxy.h"
#include "remcuda.nsmap"
#include <iostream>
int main(int argc, char* argv[]){ 
  remcuda c; 
  int n=atoi(argv[1]);
  int i;
  struct _rcArray V1, V2,result;
  
  
  V1.__ptr=new float[n];
  V2.__ptr=new float[n];
  
  for(i=0;i<n;i++){
    (V1.__ptr)[i]=(float)(i+1);
    (V2.__ptr)[i]=(float)(i+1);
  }

  V1.__size=n;
  V2.__size=n;  

  if (c.ns__sum(V1, V2, &result) == SOAP_OK)
    for(i=0;i<n;i++)
        std::cout <<result.__ptr[i]<<std::endl;
  else
    soap_print_fault(c.soap, stderr);
  
  delete[] V1.__ptr;
  delete[] V2.__ptr;  
  delete[] result.__ptr;
  
  return 0;
}

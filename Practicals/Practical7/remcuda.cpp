#include "soapH.h" /* get the gSOAP-generated definitions */
#include "remcuda.nsmap" /* get the gSOAP-generated namespace bindings */
#include <stdio.h>
void Sum_vec(float* v1, float* v2, float* w, int N);

int main(int argc, char* argv[])  
{ int m, s; /* master and slave sockets */
  struct soap *soap = soap_new();
  if (argc < 2)
    soap_serve(soap); /* serve as CGI application */
  else
  { m = soap_bind(soap, NULL, atoi(argv[1]), 100); /* bind to the port supplied as command-line argument */
    if (m < 0)
    { soap_print_fault(soap, stderr);
      exit(-1);
    }
    fprintf(stderr, "Socket connection successful: master socket = %d\n", m);
    for (;;)
    { s = soap_accept(soap);
      fprintf(stderr, "Socket connection successful: slave socket = %d\n", s);
      if (s < 0)
      { soap_print_fault(soap, stderr);
        exit(1);
      } 
      soap_serve(soap);
      soap_end(soap);
    }
  }
  soap_done(soap);
  free(soap);
  return 0;
} 
int ns__sum(struct soap *soap, struct _rcArray v1, struct _rcArray v2, struct _rcArray *result){ 
  int n=v1.__size;
  result->__size=n;
  result->__ptr=new float[n];
  Sum_vec(v1.__ptr, v2.__ptr, result->__ptr, v1.__size);
  /*
  int i;
  int n=v1.__size;

  result->__size=n;
  //result->__ptr=(xsd_float*)soap_malloc(soap,sizeof(xsd_float)*n); 
  result->__ptr=new float[n];
  for(i=0;i<n;i++){
    (result->__ptr)[i] = v1.__ptr[i] + v2.__ptr[i];
    printf("%g\t%g\n",v1.__ptr[i] + v2.__ptr[i],  (result->__ptr)[i]);  
  }
  */
  return SOAP_OK;  
}  
int ns__InnerProduct(struct soap *soap, struct _rcArray v1, struct _rcArray v2, float *result){ 
  int i;
  int n=v1.__size;
  (*result)=0.0;
  for(i=0;i<n;i++){
    (*result)+= v1.__ptr[i]*v2.__ptr[i];
    //printf("%i'\t'%g\n", i, *result);
    
  }  

  return SOAP_OK;  
}  

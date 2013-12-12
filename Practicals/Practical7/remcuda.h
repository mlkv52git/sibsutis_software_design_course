//gsoap ns service name: remcuda
//gsoap ns service namespace: http://178.49.13.74/remcuda.wsdl
//gsoap ns service location: http://127.0.0.1:161952
//gsoap ns schema namespace: urn:remcuda  
struct _rcArray{
  float* __ptr;
  int __size;
};

int ns__sum(struct _rcArray v1, struct _rcArray v2, struct _rcArray *result);  
int ns__InnerProduct(struct _rcArray v1, struct _rcArray v2, float *result);  

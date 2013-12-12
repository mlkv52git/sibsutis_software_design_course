__global__  void gSum_vec(float* v1, float* v2, int N){
	int i=threadIdx.x+blockIdx.x*blockDim.x;
	v1[i]+=v2[i]+1.0;
}

void Sum_vec(float* v1, float* v2, float *w, int N){
  float *u1,*u2;
  
  cudaMalloc((void **) &u1, N*sizeof(float));
  cudaMalloc((void **) &u2, N*sizeof(float));

  cudaMemcpy(u1, v1, N*sizeof(float), cudaMemcpyHostToDevice);
  cudaMemcpy(u2, v2, N*sizeof(float), cudaMemcpyHostToDevice);	
	
  gSum_vec<<<dim3(N/512+((N%512)?1:0)),dim3(512)>>>(u1,u2,N);
  cudaDeviceSynchronize();  

  cudaMemcpy(w, u1, N*sizeof(float), cudaMemcpyDeviceToHost);
	
  cudaFree(u1);
  cudaFree(u2);
  }

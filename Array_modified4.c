/*
Akashdeep Roy
DAA
Mean & Variance result showing in binary file
*/ 

#include <stdio.h>
#include <stdlib.h>

float* f(int input[], int L){
  
  int z1,i,z2;
  float a1,a2;

  float* output=(float*)malloc(2*sizeof(float));
  z1=0;
  for(i=0;i<L;i++){
    z1=z1+input[i];
  }
  a1=z1/(float)L;

  z2=0;
  for(i=0;i<L;++i){
    z2=z2+(input[i]*input[i]);
  }
  a2=(z2/(float)L)-(a1*a1);
 
  output[0]=a1;
  output[1]=a2;
  return output;
}

int main(){
  
  int* ptr;
  int m;
  int i;
  printf("This program is to calculate mean & variance of the given array {1^2,2^2,...}. ");
  printf("No of elements in the input array: ");
  scanf("%d", &m);
  
  ptr=(int*)malloc(m*sizeof(int));
  free(ptr);
 

  for(i=0;i<m;++i){
    ptr[i] = (i+1)*(i+1);
  }
  printf("The mean & variance of the input array are respectively: ");
  printf("%f %f\n",f(ptr,m)[0],f(ptr,m)[1]);
  
FILE *fp;
fp=fopen("binary.bin","wb");
fwrite(f(ptr,m),4,sizeof(float),fp);

fclose(fp);

FILE *op;
  op = fopen("D:/PDF books/TIFR works/array/binary.bin" , "rb" );
  float* out;
  fread(out , 4 , sizeof(float) , op);
  fclose(op);
  printf("mean = %f",out[0]);
  printf("\nvariance = %f\n",out[1]);
  
}
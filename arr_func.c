/*
Akashdeep Roy
DAA
makefile element 3
*/

#include <stdio.h>
#include <stdlib.h>
#include "meanvar.h"

int main(){
  
  float* ptr;
  int m;
  int i;
  printf("This program is to calculate mean & variance of the given array {1^2,2^2,...}. ");
  printf("No of elements in the input array: ");
  scanf("%d", &m);
  
  ptr=(float*)malloc(m*sizeof(float));
 
 

  for(i=0;i<m;++i){
    ptr[i] = (i+1)*(i+1);
  }
  printf("The mean & variance of the input array are respectively: ");
  printf("%f %f\n",f(ptr,m)[0],f(ptr,m)[1]);
  
}

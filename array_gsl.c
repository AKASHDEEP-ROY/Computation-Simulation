/*
Akashdeep Roy
DAA
Comparing GSL values with my program for mean & variance
*/

#include <stdio.h>
#include <stdlib.h>
#include "meanvar.h"
#include<gsl/gsl_statistics_float.h>

int main(){
  
  float* ptr;
  int m;
  int i;
  float meangsl,vargsl;
  printf("This program is to calculate mean & variance of the given array {1^2,2^2,...}. ");
  printf("No of elements in the input array: ");
  scanf("%d", &m);
  
  ptr=(float*)malloc(m*sizeof(int));
 
 

  for(i=0;i<m;++i){
    ptr[i] = (i+1)*(i+1);
  }
  meangsl=gsl_stats_float_mean(ptr,1,100);
  vargsl=gsl_stats_float_variance(ptr,1,100);
  printf("The mean & variance of the input array are respectively: ");
  printf("%f %f\n",f(ptr,m)[0],f(ptr,m)[1]);
  printf("Mean of the array elements is:%f\n(by gsl)",meangsl);
  printf("Variance of the array elements is:%f\n(by gsl)",vargsl);
}

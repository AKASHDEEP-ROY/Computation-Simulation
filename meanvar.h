/*
Akashdeep Roy
DAA
function file for the header file creation
*/

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

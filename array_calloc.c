/*
Akashdeep Roy
DAA
printing un-squared array elements using calloc
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  int* ptr;
  int m;
  int i;
  printf("No of elements: ");
  scanf("%d", &m);
  
  ptr=(int*)calloc(m,sizeof(int));

 

  for(i=0;i<m;++i){
    printf("%d\n",ptr[i]);
    ptr[i] = (i+1)*(i+1);
  }

  printf("The elements of the array are: ");
  for(i=0;i<m;++i){
    printf("%d, ", ptr[i]);
  }
}

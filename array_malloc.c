/*
Akashdeep Roy
DAA
printing un-squared array elements using malloc
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  int* ptr;
  int m;
  int i;
  printf("No of elements: ");
  scanf("%d", &m);
  
  ptr=(int*)malloc(m*sizeof(int));

 

  for(i=0;i<m;++i){
    printf("%d\n",ptr[i]);
    ptr[i] = (i+1)*(i+1);
  }

  printf("The elements of the array are: ");
  for(i=0;i<m;++i){
    printf("%d, ", ptr[i]);
  }
}

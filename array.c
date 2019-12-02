/*
Akashdeep Roy
DAA
Printing the squared array elements
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
    ptr[i] = (i+1)*(i+1);
  }

  printf("The elements of the array are: ");
  for(i=0;i<m;++i){
    printf("%d, ", ptr[i]);
  }
}

/*
AKASHDEEP ROY
DAA
27/11/2019
To find Factorial of an Integer
*/


#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//The function defined

long int factorial(int n){
  if(n==0||n==1){
    return 1;
  }
  else{
    return(n*factorial(n-1));
  }
}

//The main program

 int main(){
   clock_t start,end;
   float cpu_time_used=0;
   start=clock();
   int n;
   int fct;

   printf("Enter a number whose factorial is to be determined: ");
   scanf("%d", &n);
   if(n<0){
     printf("Factorial of a negative no is not defined");
   }
   else{
     fct = factorial(n);
     printf("The factorial of %d is %d ",n,fct);
   }

   end=clock();
   cpu_time_used +=((float)(end-start))/CLOCKS_PER_SEC;
   printf("Time elapsed is %f seconds",cpu_time_used);
 }


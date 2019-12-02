/*
Akashdeep Roy
DAA
Factorial in C to run it in python
*/




//The function defined

int factorial(int n){
  if(n==0||n==1){
    return 1;
  }
  else{
    return(n*factorial(n-1));
  }
}


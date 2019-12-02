
//AKASHDEEP ROY
//DAA
//27/11/2019
//To see the sizes of char, int, long int, float, double in bytes.

#include <stdio.h>

int main()
{
  char character;
  int integer;
  long int LongInteger;
  float floating;
  double dual;
  

  // Sizeof operator is used to evaluate the size of a variable
  printf ("Size of char: %ld bytes\n",sizeof(character));
  printf ("Size of int: %ld bytes\n",sizeof(integer));
  printf ("Size of long int: %ld bytes\n",sizeof(LongInteger));
  printf ("Size of float : %ld bytes\n",sizeof(floating));
  printf ("Size of double : %ld bytes\n",sizeof(dual));
}
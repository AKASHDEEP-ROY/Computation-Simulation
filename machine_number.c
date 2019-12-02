/*
Akashdeep Roy
DAA
To find Largest & Lowest Machine number
*/

#include <stdio.h>

int main(){
  printf("To find largest integer,press 1\n");
  printf("To find lowest integer,press -1\n");
  printf("To find largest character,press 2\n");
  printf("To find lowest character,press -2\n");
  printf("To find largest long integer,press 3\n");
  printf("To find lowest long integer,press -3\n");
  int q;
  scanf("%d",&q);

  if(q==1){
  //to find largest integer
    int i;
    i=0;
    while(i>=0){
      i=i+1;
    }
    printf("the largest machine number for integer is %d\n" ,i-1);
  }

 else if(q==-1){
  //to find lowest integer
    int j;
    j=0;
    while(j<=0){
      j=j-1;
    }
    printf("the lowest machine number for integer is %d\n" ,j+1);
  }

 else if(q==-2){
  //to find lowest character
    char c;
    c='';
    while((char)c+1>=0){
      c=c+1;
    }
    printf("the lowest machine number for character is %d\n" ,c);
  }
  else if(q==2){
  //to find largest character
    char d;
    d='';
    while((char)d-1<=0){
      d=d-1;
    }
    printf("the largest machine number for character is %d\n" ,d);
  }
  else if(q==3){
  //to find largset long-integer
    long int k;
    k=0;
    while(k>=0){
      k=k+1;
    }
    printf("the largest machine number for long integer is %ld\n" ,k-1);
  }
  else if(q==-3){
  //to find lowest long-integer
    long int h;
    h=0;
    while(h<=0){
      h=h-1;
    }
    printf("the lowest machine number for long integer is %ld\n", h+1);
  }





}

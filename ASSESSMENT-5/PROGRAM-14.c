// Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>
#include <math.h>
int main ()
{
  int a,b,digits=0,last=0,first=0,divisor=0,middle,reversed=0;
  scanf("%d",&a);
  b=a;
  while (b>0)
  {
        digits++;
       b/=10;
  }
  divisor=pow(10,digits-1);
  first=a/divisor;
  middle=(a%divisor)/10;
  last=a%10;
  //divisor=divisor+1;
  reversed=(last*divisor)+middle*10+first;
  printf("%d",reversed);
  //printf("   %d   ",first);
  // printf("   %d   ",middle);
  //printf("   %d   ",last);
  // printf("   %d   ",divisor+1);
}
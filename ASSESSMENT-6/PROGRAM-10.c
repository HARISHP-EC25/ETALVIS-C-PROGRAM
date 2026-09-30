// write a loop program to print the sum of two-digit odd numbers whose ten's digit is 7.
#include <stdio.h>
int main (){
    int i,sum=0;
    i=71; 
    while(i<=79)
    {
            sum=sum+i;
        i=i+2;
    }
    printf("%d",sum);
}
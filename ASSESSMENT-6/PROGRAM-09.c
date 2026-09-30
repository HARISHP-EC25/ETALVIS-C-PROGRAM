// write a loop program to print the sum of two-digit numbers whose one's digit is 5.
#include <stdio.h>
int main (){
    int i,sum=0;
    i=11; 
    while(i<=99){
        if(i%10==5){
            sum=sum+i;
        }
        i++;
    }printf("%d",sum);
}
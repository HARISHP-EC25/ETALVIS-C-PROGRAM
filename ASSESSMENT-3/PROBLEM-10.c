//Get a two-digit number from the user and check if the digit 0 greater than the digit 1. If yes, print "Success" otherwise, print "Failure"
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a%10>a/10)
    {
        printf("SUCCESS");
    }
    else
    {
        printf("FAILURE");
    }
}
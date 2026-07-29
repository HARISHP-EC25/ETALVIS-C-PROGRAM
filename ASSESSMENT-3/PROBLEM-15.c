//Get a four-digit number from the user and check if the first 2 digit and next 2 digit are identical. If yes, print "Success" otherwise, print "Failure"
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a%100==a/100)
    {
        printf("SUCCESS");
    }
    else
    {
        printf("FAILURE");
    }
}
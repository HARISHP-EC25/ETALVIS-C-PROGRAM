//Get a four-digit number from the user and check if the digit 0 and digit 1 are identical. If yes, print "Success" otherwise, print "Failure"
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a%100;
    if(b%10==b/10)
    {
        printf("SUCCESS");
    }
    else
    {
        printf("FAILURE");
    }
}
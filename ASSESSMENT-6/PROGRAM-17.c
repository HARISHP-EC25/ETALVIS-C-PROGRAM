//Write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14.
#include<stdio.h>
int main()
{
    int a,c=0,i=2;
    scanf("%d",&a);
    while(a>i)
    {
        if(a%i==0)
        {
            c++;
        }
        i++;
    }
    if(c==0)
    {
        printf("%d is prime",a);
    }
    else
    {
        printf("%d is composite",a);
    }
    int sum=a%10+a/10;
    if(sum==14)
    {
        printf("\nSum is equal to 14");
    }
    else
    {
        printf("\nSum is not equal to 14");
    }
}
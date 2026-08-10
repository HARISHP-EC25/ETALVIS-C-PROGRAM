//Write a program to get number from user, print whether that number's first two digits (ten's digits and one's digit) is prime.
//prime or not
#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&b);
    a=b%100;
    if(a<2)
    {
        
    }
    else{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Prime");
    }
    if(c!=0)
    {
        printf("Not prime");
    }
}
}
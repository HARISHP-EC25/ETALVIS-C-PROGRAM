//prime or not
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
}
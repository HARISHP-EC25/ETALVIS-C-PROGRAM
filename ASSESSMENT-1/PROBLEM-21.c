#include<stdio.h>
int main()
{
    int a,b,sum=0,c=0,d;
    scanf("%d",&a);
    int m=a;
    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    while(sum>0)
    {
        d=sum%10;
        c=c+d;
        sum=sum/10;
    }
    printf("%d",c);
    return 0;
}
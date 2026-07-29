#include<stdio.h>
int main()
{
    int a,b,c,m=0,n=0,s=0,r=0;
    scanf("%d",&a);
    while(a>100)
    {
        b=a%10;
        m=m*10+b;   
        a=a/10;
    }
    while(m>0)
    {
        b=m%10;
        n=n*10+b;   
        m=m/10;
    }
    while(a>0)
    {
        b=a%10;
        s=s*10+b;   
        a=a/10;
    }
    printf("\n%d",s*100+n);
    return 0;
}
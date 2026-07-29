#include<stdio.h>
int main()
{
    int a,sum=0,c,m=0;
    scanf("%d",&a);
    while(a>100)
    {
    sum=sum*10+a%10;
    a=a/10;
    }
    printf("%d",a*100+sum);
    return 0;
}
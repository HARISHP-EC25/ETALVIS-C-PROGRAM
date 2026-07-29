#include<stdio.h>
int main()
{
    int a,b,c=0,s=0;
    scanf("%d",&a);
    int m=a;
    b=a%10;
    while(a>10)
    {
        a=a/10;
    }
    (a%2&&b%2)?printf("%d",m-5):printf("%d",m);
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    int s=a;
    while(a>0)
    {
        b=a%10;
        c=c+b;
        a=a/10;
    }
   // printf("%d",c);
    (c%2)?printf("%d",s-5):printf("%d",s);
    return 0;
}
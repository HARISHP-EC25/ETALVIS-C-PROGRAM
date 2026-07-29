#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a%10;
    while(a>10)
    {
        a=a/10;
    }
  // printf("%d",a);
    printf("%d",a*100+b);
    return 0;
}
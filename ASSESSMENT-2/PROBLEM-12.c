#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a%10,c=a/10;
    if(b<=c)
    printf("1");
    else
    printf("0");
    return 0;
}
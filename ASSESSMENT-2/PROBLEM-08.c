#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a%10,c=a/10;
    if(b==c)
    printf("0");
    else
    printf("1");
    return 0;
}
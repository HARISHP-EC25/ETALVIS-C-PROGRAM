//Write a loop program to print sum of 1 to 5
#include<stdio.h>
int main()
{
    int a,sum=0;
    scanf("%d",&a);
    int i=0;
    loop:if(i<=a)
    {
        sum= sum + i;
        i++;
        goto loop;
    }
    printf("%d",sum);
}
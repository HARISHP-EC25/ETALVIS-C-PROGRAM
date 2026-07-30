//Write a loop program to print sum of 6 to 1
#include<stdio.h>
int main()
{
    int a,sum=0;
    int i=6;
    loop:if(i>0)
    {
        sum= sum + i;
        i--;
        goto loop;
    }
    printf("%d",sum);
}
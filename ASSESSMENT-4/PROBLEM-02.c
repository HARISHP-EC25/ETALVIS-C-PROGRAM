//Write a loop program to print 5 to 1 one bv one.
#include<stdio.h>
int main()
{
    int a=5;
    loop:if(a>0)
    {
        printf("%d\n",a);
        a--;
        goto loop;
    }
}
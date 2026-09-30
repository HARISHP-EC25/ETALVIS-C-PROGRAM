// sum of 1-5
#include<stdio.h>
int main()
{
    int s=0;
    int i=1;
    while(i<=5)
    {
        s=s+i;
        i++;
    }
    printf("%d\n",s);
}
// 2 digit odd number between below 20
#include<stdio.h>
int main()
{
    int i=10;
    while(i<=20)
    {
        if(i%2!=0)
        {
          printf("%d\n",i);
        }
        i++;
    }
}
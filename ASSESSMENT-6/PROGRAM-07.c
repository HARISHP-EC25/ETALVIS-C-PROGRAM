// 2 digit odd number whose sum is 7
#include<stdio.h>
int main()
{
    int i=10;
    while(i<=99)
    {
        if(i%2!=0)
        {
            int b=i%10,c=i/10;
          if(b+c ==7)
          {
            printf("%d\n",i);
          }
        }
        i++;
    }
}
// 2 digit odd number whose sum is 7
#include<stdio.h>
int main()
{
    for(int i=10;i<=99;i++)
    {
        if(i%2!=0)
        {
            int b=i%10,c=i/10;
          if(b+c ==7)
          {
            printf("%d\n",i);
          }
        }
    }
}
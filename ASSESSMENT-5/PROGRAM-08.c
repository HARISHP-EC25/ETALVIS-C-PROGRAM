// 2 digit even number whose sum is 6
#include<stdio.h>
int main()
{
    for(int i=10;i<=99;i++)
    {
        if(i%2==0)
        {
            int b=i%10,c=i/10;
          if(b+c ==6)
          {
            printf("%d\n",i);
          }
        }
    }
}
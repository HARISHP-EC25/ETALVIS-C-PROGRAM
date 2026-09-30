// 2 digit even number whose sum is 6
#include<stdio.h>
int main()
{
    int i=10;
    while(i<=99)
    {
        if(i%2==0)
        {
            int b=i%10,c=i/10;
          if(b+c ==6)
          {
            printf("%d\n",i);
          }
        }
        i++;
    }
}
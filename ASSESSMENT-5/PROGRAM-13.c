// reverse of all digits
#include<stdio.h>
int main()
{
    int i,s=0,a,b,c=0;
    scanf("%d",&i);
    while(i>0)
    {
      a=i%10;
       s=s*10+a;
      i=i/10;
    }
    printf("%d",s);
}
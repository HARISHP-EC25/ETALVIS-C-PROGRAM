//prime or not
#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    if(a<2)
    {
        
    }
    else{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("%d is Prime",a);
    }
    if(c!=0)
    {
        printf("%d is Composite",a);
    }
}
}
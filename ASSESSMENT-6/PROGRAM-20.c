// Write a program to print a total numb er single digit prime number.
#include <stdio.h>
int main()
{
    int i=2,a=0;
    while(i<=9)
    {
        if(i==2||i==3||i==5||i==7)
        {
           a++;
        }
        i++;
    }
     printf("%d",a);
    return 0;
}
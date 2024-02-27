// Q. Program to find Factorial of a given number?


#include<stdio.h>
int main()
{
    int i,fac=1;
    printf("Enter number for find Factorial:");
    scanf("%d",&i);
    while (i<=1)
    {
        fac = fac*i;
        i--;
    }
    printf("\n Factorial = %d",fac);
    return 0;
}
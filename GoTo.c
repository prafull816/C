// Q. Write a program to check a number is odd or even using goto statement?


#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter Number:");
    scanf("%d",&a);
    if (a%2==0)
    goto even;
    else
    goto odd;
    even:
    printf("\n Number is even");
    return 0;
    odd:
    printf("\n Number is odd");
    return 0;
}
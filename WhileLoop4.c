//  Q. Write a program to find sum of digits of a given number?


#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("\n Enter Number:");
    scanf("%d",&i);
    while (i>0)
    {
        sum = sum + i / 10;  
        i = i / 10;
    }
    printf("\n Sum of Digits = %d",sum);
    return 0;
}
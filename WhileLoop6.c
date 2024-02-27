// Q. Write a program to find Reverse of a Number?


#include<stdio.h>
int nain()
{
    int i,rev=0;
    printf("\n Enter no of Factorial Reverse:");
    scanf("%d",&i);
    while (i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    printf("\n Reverse = %d",rev);
    return 0;
    
}
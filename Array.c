// Q--> Program to accept and display array?


#include<stdio.h>
int main()
{
    int a[10],i;
    for (i=0;i<10;i++)
    {
    printf("\n Enter a Number:");
    scanf("%d",&a[i]);
    }
    printf("\n Array Element are:");
    for(i=0;i<10;i++)
    printf("\n %d",a[i]);
    return 0;
}
// Q--> Program to find sum of array element ?


#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("\n Enter Number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("\n Sum of array numbers = %d",sum);
    return 0;
}
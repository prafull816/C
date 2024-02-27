// Q. Check whether a given number is armstrong number or not ?



#include<stdio.h>
int main()
{
    int i,sum=0,x;
    printf("\n Enter no to check armstrong:");
    scanf("%d",&i);
    x=i;
    while (i>0)
    {
        sum = sum + (i%10)*(i%10)*(i%10);
        i=i/10;
    }
    if (sum==x)
    {
        printf("\n Armstrong");
    }
    else
    printf("\n Not Armstrong");
    
    return 0;
}
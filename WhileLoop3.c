//  Q. Write Program of find sim of first n natural numbers?


#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("\n Enter Number of Natural:");
    scanf("%d",&n);
    i=1;
    sum=0;
    while (i<=n)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("\n Sum = %d",sum);
    return 0;
}
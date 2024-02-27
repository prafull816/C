// Conditional Operators //

#include<stdio.h>
int main()
{
    int a,b,max;
    printf("\n Enter Two Numbers:");
    scanf("%d %d",&a,&b);
    max = (a>b)?a:b;                 
    printf("\n Max Numbers = %d",max);
    return 0;
}
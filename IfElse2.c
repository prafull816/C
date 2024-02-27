// Q. Program to find greater number between three numbers?


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter Three Numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    printf("\n Max Number = %d",a);
    else if (b>a && b>c)
    printf("\n Max Number = %d",b);
    else if (c>a && c>b)
    printf("\n Max Number = %d",c);
    return 0;
}
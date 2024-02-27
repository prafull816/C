// Q. Write a program to find max number between three numbers?

#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter Three NUmbers:");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b && a>c)?a:(b>a && b>c)?b:c;   
    printf("\n Max Number = %d",max);
    return 0;
}
//   Q-->   Program to find sum even numbers and product of odd numbers ?



#include<stdio.h>
int main()
{
    int a[10],i,sum=0,pro=1;
    for(i=0;i<10;i++)
    {
        printf("\n Enter NUmber:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    if(a[i]%2==0)
    sum=sum+a[i];
    else
    pro=pro*a[i];
    {
        printf("\n Sum of Even No. = %d and Porduct of odd No. = %d",sum,pro);
    }
    return 0;
}
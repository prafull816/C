// Q--> Program to print alternare elemet of the array ?


#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("\n Enter Number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
    printf("\n %d",a[i]);
    }
    return 0;
}
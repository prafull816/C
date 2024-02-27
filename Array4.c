// Q-->  Program to print reverse element of the array ?



#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        printf("\n Enter Element:");
        scanf("%d",&a[i]);
    }
    for(i=9;i>=0;i--)
    printf("\n %d", a[i]);
    return 0;
}
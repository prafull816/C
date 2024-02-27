// Q-->  Find  Min Number in the array ?


#include<stdio.h>
int main()
{
    int a[10],i,min;
    for(i=0;i<10;i++)
    {
        printf("\n Enter numbers:");
        scanf("%d", &a[i]);
    }
    min=a[0];
    for(i=0;i<10;i++)
    if(a[i]<min)
    min=a[i];
    printf("\n min no is = %d",min);
    return 0;
}
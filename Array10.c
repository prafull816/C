// Q--> Program to sort the array in ascending order/ decending order ?


#include<stdio.h>
int main()
{
    int a[10],i,j,f;
    for(i=0;i<10;i++)
    {
        printf("\n Enter Number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    for(j=i+1;j<10;j++)
    {
        if(a[i]>a[j])
        {
            j=a[i];
            a[i]=a[j];
            a[j]=j;
        }
    }
    printf("\n Array alter Sorting is:");
    for(i=0;i<10;i++)
    printf("\n %d", a[i]);
    return 0;
}
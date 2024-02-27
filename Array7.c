// Q--> Program to count frequency of given no ?


#include<stdio.h>
int main()
{
    int a[10],i,freq=0,key;
    for(i=0;i<10;i++)

    {
        printf("\n Enter No:");
        scanf("%d",a[i]);
    }
    printf("\n Enter No to find frequency:");
    scanf("%d",key);
    for(i=0;i<10;i++)
    if(a[i]==key)
    freq++;
    printf("\n Frequency of %d %d",key,freq);
    return 0;
}
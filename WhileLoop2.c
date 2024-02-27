// Q. Print odd number 1 to n?


#include<stdio.h>
int main()
{
    int n,i;
    printf("\n Enter Value of n:");
    scanf("%d",&n);
    i=1;      // initialization
    while (i<=n)   // Condition
    {
        if(i%2==1)
        printf("\n %d",i);
        i=i+1;  // Increment
    }
    
    return 0;
}
// Q--> Count Total odd or even number in a 3*3 matrix  ?


#include<stdio.h>
int main()
{
    int a[3][3],i,j,even,odd;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter Value for 2D Array:");
        scanf("%d",&a[i][j]);
    }
    printf("\n 2D Array Element are:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
    }
    even=odd=0;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(a[i][j]%2==0)
        even++;
        else
        odd++;
    }
    printf("\n Total Even = %d and Total Odd = %d", even, odd);
    return 0;
}
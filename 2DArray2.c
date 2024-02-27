//   Q-->  Find Sum of Even and Peoduct of Odd in 2D Array ?



#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0,pro=0;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter 2D Array Value:");
        scanf("%d",&a[i][j]);
    }
    printf("\n 2D Array Element are:");
    for(i=0;i<3;i++)
    {
     printf("\n");
     for(j=0;j<3;j++)
     printf("%d\t",a[i][j]);
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(a[i][j]%2==0)
        sum=sum+a[i][j];
        else
        pro=pro*a[i][j];
    }
    printf("\n Sum = %d and Pro = %d",sum,pro);
    return 0;
}
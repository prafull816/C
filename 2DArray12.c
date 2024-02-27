// Q-->   Cheack Wether two matrix are identical or not  ?



#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,flag=0;
    printf("\n Enter Value for the first matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter Value for 2D ARray:");
        scanf("%d",&a[i][j]);
    }
    printf("\n Enter Value for the second matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter Value for 2D ARray:");
        scanf("%d",&b[i][j]);
    }
    printf("\n First Matrix is:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
    }
    printf("\n Second Matrix is:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",b[i][j]);
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(a[i][j]!=b[i][j])
        flag=1;
    }
    if(flag==0)
    printf("\n The Matrix is Identical.");
    else
    printf("\n The Matrix is not Identical.");
    return 0;
}
//   Q-->   Multiplication of Two Matrix  ?


#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,k;
    printf("\n Enter Value for First Matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter Value for 2D Array:");
        scanf("%d",&a[i][j]);
    }

    printf("\n Enter Value For Second Matrix:"); 
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
     {
        printf("\n Enter Value for 2D Array:");
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
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\n Multiplication of Two Matrix is:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",c[i][j]);
    }
    return 0;
}
// Q-->  Addition of two Matrix ?


#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,c;
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
    for(j=0;j<3;j++)
    c[i][j]=a[i][j]+b[i][j];
    printf("\n Addition of Two Matrix is:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",c[i][j]);
    }
     return 0;
}
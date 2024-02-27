// Q-->   Print Transpose of the Matrix ?
// 2nd Way



#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("\n Enter Value for the matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter Value for 2D Array:");
        scanf("%d",&a[i][j]);
    }
    printf("\n The Orignal matrix is:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    b[j][i]=a[i][j];
    printf("\n Traanspose Matrix is:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t", b[i][j]);
    }
    return 0;
}
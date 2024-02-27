//  Q.--> Print Transpose of the Matrix.
//   1st way

#include<stdio.h>
int main()
{
    int a[3][3],i,j;
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
    printf("\n Transpose of the matrix:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[j][i]);
    }
    return 0;
}
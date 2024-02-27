//   Q-->   Check Wthther a matrix is upper Triangular matrix or not ?


#include<stdio.h>
int main()
{
    int a[3][3],i,j,flag=0;
    printf("\n Enter Value for the matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter Value for 2D Array:");
        scanf("%d",&a[i][j]);
    }
    printf("\n The Matrix is :");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if((i>j)&&(a[i][j]!=0))
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("\n Not Upper Triangular Matrix.");
    else
    printf("\n Upper Triangular Matrix.");
    return 0;
}
// Q--> Search an Element in 2D array ?



#include<stdio.h>
int main()
{
    int a[3][3],i,j,key;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\n Enter Value For 2D Array:");
        scanf("%d",&a[i][j]);
    }
    printf("\n 2D Array Element are:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
    }
    printf("\n Enter No. to Search:");
    scanf("%d",&key);
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(a[i][j]==key)
        {
            printf("Element Found at a [%d][%d] pos",i,j);
            return 0;
        }
    }
    printf("\n Element not Found");
    return 0;
}
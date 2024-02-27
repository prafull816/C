// Q-->  Program to print left and right digonal element of a3*3 matris ?

#include <stdio.h>
int main()
{
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter Value for 2D Array:");
            scanf("%d", &a[i][j]);
        }
    printf("\n Element of 2D Array:");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }
    printf("\n The Leaft Digonal Element are:");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                printf("%d\t", a[i][j]);
        }
    printf("\n The Right Digonal Element are:");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (i + j == 2)
                printf("%d\t", a[i][j]);
        }
    return 0;
}
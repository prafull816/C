// Q--> Find sum of all 2D Array Element ?

#include <stdio.h>
int main()
{
    int a[3][3], i, j, sum;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter Value for 2D Array:");
            scanf("%d", &a[i][j]);
        }
    printf("\n 2D Array Element are:");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            sum = sum + a[i][j];
    printf("\n Sum of 2D Array is=%d", sum);
    return 0;
}
// STAR PATTERN 


#include<stdio.h>
int main()
{
    int i,j;
    while (i<5)
    {
        printf("\n");
        j=1;
        while (j<=i)
        {
            printf("*");
            j++;
        }
        j++;
    }
    return 0;
}
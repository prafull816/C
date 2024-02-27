// STAR PRINTING



#include<stdio.h>
int main()
{
    int i,j,b;
    i=1;
    while(i<=5)
    {
        b=1;
        while (b<=5-i)
        {
            printf("\n");
            
        }
        j=1;
        while (j<=5-i)
        {
            printf("*");
            j++;
        }
        i++;
    }
    return 0;
}
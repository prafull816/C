// STAR PATTERN PRINTING



#include<stdio.h>
int main()
{
    int a,b,c;
    c=1;
    printf("Enter number of row:");
    scanf("%d",&a);
    while (a>0)
    {
        printf("\n");
        b=1;
        while (b<=a)
        {
            printf("%d",a);
            b++;
        }
        a=a-1; c=c+1;
    }
    return 0;
}
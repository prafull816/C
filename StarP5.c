// STAR PATTERN PRINTING



#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number of row:");
    scanf("%d",&a);
    while (a>0)
    {
        printf("\n");
        b=1;
        while (b<=a)
        {
            printf("%d",a);   // a/b change the pattern
            b++;
        }
        a=a-1;
    }
    return 0;
}
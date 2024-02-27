 //   Q-> Star Peinting Pattern


#include<stdio.h>
int main()
{
    int n,i,b,j;
    printf("Enter no. of Rows:");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        printf("\n");
        b=1;
        while (b<i)
        {
            printf(" ");
            b++;
        }
        j=1;
        while (j<=n+1-i)
        {
            printf("%d",i);          // We use ("%d",j) or ("%d",i) or ("*")
            j++;
        }
        
        i=i+1;
    }
    return 0;
}
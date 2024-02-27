 //   Q-> Star piramid Printing Pattern


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
        while (b<=n-i)
        {
            printf(" ");
            b++;
        }
        j=1;
        while (j<=i*2-1)
        {
            printf("%d",j);            // We use this ("%d",i) or ("%d",j) or ("*")
            j++;
        }
        
        i=i+1;
    }
    return 0;
}
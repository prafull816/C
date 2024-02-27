// Fibpnacci Series


#include<stdio.h>
int main()
{
    int n,x,y,z;
    printf("\n Enter max Limit:");
    scanf("%d",&n);
    x=0; y=1; z=0;
    while (z<=n)
    {
        printf("\n %d",z);
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
}
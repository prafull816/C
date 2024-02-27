//  Q. write a Program to print first "N" Natural Number?


#include<stdio.h>
int main()
{
    int n, i=1;
    printf("\n Enter Number:");
    scanf("%d",&n);
    printnum:
    printf("\n %d",i);
    i++;
    if(i<=n)
    goto printnum;
    return 0;
}
// Q. Write  a Program Palindrome if guven number?


#include<stdio.h>
int main()
{
    int i,x,rev=0;
    printf("\n Enter Number to Cheake Palindrome:");
    scanf("%d",&i);
    x=i;
    while (i>0)
    {
        rev=(rev*10)+i%10;
        i=i/10;
    }
    if(rev==x)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}
// C Palindrome Program


#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("\n Enter String:");
    gets(a);
    b-strrev(a);
    if(strcmpi(a,b)==0)
    printf("\n Palindrome String");
    else
    printf("\n Not Pallindrome String");
    return 0;
}
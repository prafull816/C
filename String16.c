// C String Function ==> strupr()
// This function converts thestring into upper case.


#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("\n enter string in lower case:");
    gets(a);
    printf("\n String in upper case = %s",(a));
    return 0;
}
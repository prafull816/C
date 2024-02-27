// C String Function - strwr()

// This function converts the string into lower case

#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("\n Enter String in uppper Case:");
    gets(a);
    printf("\n String in lower case=%d",strlwr(a));
    return 0;
}
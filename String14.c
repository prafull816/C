// C String function - Strlwr()

// Conver the string into upper case without using built in function strupr()

#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("\n Enter STring in Lower case:");
    gets(a);
    for(int i=0; a[i]!='\0';i++)
    a[i]=a[i]=32;
    printf("\n String in lower case=%d",a);
    return 0;
}
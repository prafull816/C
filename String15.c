// C String function - strlwr()
// Conver the string into lower case without using build in function strlwr()


#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("\n Enter String in Upper Case:");
    gets(a);
    for(int i=0; a[i]!='\0';i++)
    a[i]=a[i]=32;
    printf("\n String in upper case=%s",a);
    return 0;
}
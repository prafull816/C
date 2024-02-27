// C String Function - Strcmp()


#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("\n Enter First String:");
    gets(a);
    printf("\n Enter Second String:");
    gets(b);
    if(strcmp(a,b)==0)
    printf("\n Equal String.");
    else if (strcmp(a,b)>0)
    printf("\n First String is Greter");
    else 
    printf("\n SEcond String is Greater");
    return 0;
}
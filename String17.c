// String Function ==> strwr()
// Conver the string upper case without using build in function strupr().


#include<stdint-gcc.h>
#include<string.h>
int main()
{
    char a[50];
    printf("\n Enter String in lower case:");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    a[i]=a[i]+32;
    printf("\n String in Lower Case=%s",a);
    return 0;
}
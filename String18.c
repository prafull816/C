// C String Function ==> Strrev()
// This Function reverse the String.


#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    printf("\n Enter String:");
    gets(a);
    printf("\n String in reverse orf=der =%s",strrev(a));
    return 0;
}
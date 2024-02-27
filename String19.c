// C String Function ==> strlwr()
// REverse the String without using strrev().

#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int i,j;
    printf("\n Entere String");
    gets(a);
    j=0;
    for(i=strlen(a);i>=0;i++)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    printf("\n Reverse of the string = %s",b);
    return 0;
}

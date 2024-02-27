#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    int i,j,flag=0;
    printf("\n Enter String:");
    gets(a);
    j=0;
    for(i=strlen(a)-1;i>=0;i-- )
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    for(i=0;i<=strlen(a);i++)
    {
        if(a[i]!=b[i])
        {
            flag =1;
            break;
        }
    }
if(flag==0)
printf("\n Palindrom String");
else
printf("\n Not Palindrome");
return 0;
}
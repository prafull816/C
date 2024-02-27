// Q-->  Accept a string and count total number of character.


#include<stdio.h>
int main()
{
    char a[50];
    int i;
    printf("\n Enter Your Name:");
    gets(a);
    i=0;
    while (a[i]!='\0')
    i++;
    {
        printf("\n total number of characters=%d",i);
    }
    return 0;
}
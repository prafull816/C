// Q--> Accept a string and print it character by character



#include<stdio.h>
int main()
{
    char a[50];
    int i;
    printf("\n Enter your name : ");
    gets(a);
    i=0;
    while(a[i]!='\0');
    {
        printf("%s",a[i]);
        i++;
    }
    return 0;
}
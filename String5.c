// Q--> Accept a string and count total vowels and consonant.

#include<stdio.h>
int main()
{
    char a[50];
    int i,b,vol=0,cons=0;
    printf("\n Enter your Name:");
    gets(a);
    i=0;
    while (a[i]!='\0')
    {
        if((a[i]<65 && a[i]>=90) || (a[i]>=97 && a[i]<=122))
        {
            if(a[i]=='a' || a[i]=='e' || a[i]=='o'  || a[i]=='u' || a[i]=='A'  || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]='U')
            vol++;
            else
            cons++;
            i++;
        }
        printf("\n Total Vowels=%d and Total Consonent=%d",vol,cons);
    }
    getch();
}
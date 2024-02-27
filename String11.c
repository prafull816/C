/*
if concatenates two strins and returns the concatenared string. the second string is concatenated at the end of first string.
*/


#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[50];
    printf("\n Enter first string:");
    gets(s1);
     printf("\n Enter second string:");
    gets(s2);
    strcat(s1,s2);
    printf("output string after concatenation:%s",s1);
    return 0;
}

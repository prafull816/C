/* Q. => C String Function- strlen

         it returns the lenght of the string without including end
         character (terminating char '\0')
*/


// ex. for strlen:

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("\n Enter String");
    gets(str);
    printf("\n Lenght of string is: %d", Strlen(str));
    return 0;
}

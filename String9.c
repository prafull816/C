//  


#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter an Alphabeet :");
    scanf("%c",ch);
    if(isalpha(ch))
    printf("\n The Character is an Alphabet :");
    else
    printf("\n The Character is not an Alphabet :");
    if(isdigit(ch))
    printf("\n The Character is Digit:");
    if(isalnum(ch))
    printf("\n The Character is either an alphabet or a Digit:");
    else
    printf("\n The Character is neither an alphabet not a Digit:");
    if(isspace(ch))
    printf("\n Ther Character is a Space:");
    else
    ("\n The Character is not a Space:");
    if(islower(ch))
    printf("\n The Character us a Lower case Alphabet :");
    else
    printf("\n The Character is not a Lower Case alphabet :");
    if(isupper(ch))
    printf("\n The Character is upper case Alphabet :");
    else
    printf("\n The Character is not Upper  case Alphabet:");
    printf("\n The Character in lower case=%c",tolower(ch));
    printf("\n The Character in lower case=%c",toupper(ch));
    return 0;
}
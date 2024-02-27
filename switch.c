// Q. Program to print the name of the day as per user choice between 1-7?


#include<stdio.h>
int main()
{
    int ch;
    printf("\n Enter any number from 1-7:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("\n Sunday");
        break;
    case 2:
        printf("\n Monday");
        break;
    case 3:
        printf("\n Tuesday");
        break;
    case 4:
        printf("\n Wensday");
        break;
    case 5:
        printf("\n Thursday");
        break;
    case 6:
        printf("\n Friday");
        break;
    case 7:
        printf("\n Satarday");
        break;
    default:
        printf("\n You Entered Wrong Number");
        break;
    }
    return 0; 
}
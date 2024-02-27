 // ASSIGNMENT OPERATORS //

#include<stdio.h>
int main()
{
    int a,b;
    a=4;   //Assignment Operators
    b=5;   //Assignment Operators
    a+=b;   // a=a+b
    printf("\n Value of a = %d",a);
    a-=b;   //a=a-b
    printf("\n Value of a = %d",a);
    a-=b;    //a=a-b
    printf("\n Value of a = %d",a);
    a*=b;    //a=a*b
    printf("\n value of a = %d",a);
    a/=b;    //a=a/b
    printf("\n value of a = %d",a);
    a%=b;    //a=a%b
    printf("\n value of a = %d",a);
    return 0;
}
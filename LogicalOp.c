   //LOGICAL OPERATORS//

#include<stdio.h>
int main()
{
    int a,b;
    a=5;
    b=7;
    printf("\n Return Value:%d",a > 3 && a < 10);     //Return 1
    printf("\n Return Value:%d",a > 3 && a < 5);     //Return 0
    a=5;
    b=2;
    printf("\n Return Value:%d",a > 3 || a < 7);     //Return 1
    printf("\n Return Value:%d",b > 4 || a < 1);     //Return 0
    a=5;
    b=11;
    printf("\n Return Value:%d",!(a > 3 && a < 10));     //Return 0
    printf("\n Return Value:%d",!(b > 3 && b < 10));     //Return 1
    return 0;
}
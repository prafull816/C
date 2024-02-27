//INCREMENT DECREMENT OPERATORS //

#include<stdio.h>
int main()
{
    int a=5,b=10;
    printf("\n Value of a = %d and Value of b = %d",&a,&b);
    printf("\n Value of = %d",a++);
    printf("\n Value of = %d",++a);
    printf("\n Value of = %d",b++);
    printf("\n Value of = %d",++a);
    printf("\n Value of = %d",(a++)+(++b));
    return 0;
}

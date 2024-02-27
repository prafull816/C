#include <stdio.h>
int main()
{
    int age = 22;
    int *age = &age;
    int _age = *age;
    
    printf("%d", _age);
    return 0;
}
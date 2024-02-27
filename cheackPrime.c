#include <stdio.h>

int main()
{

    int n, i;
    printf("enter a no. ");
    scanf("%d", &n);
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return printf("it is not prime no");
        }
        else
        {
            return printf("it is  prime no");
        }
    }

    return 0;
}
// Q. Program to check whether an age is eligible to vote or not.

#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if (age>=18)   // Condition
    {
        printf("You are Eligible for Vote");
    }
    else
    printf("You are not Eligible for Vote");
    return 0;
    
}
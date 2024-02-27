#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("\n Enter Two Numbers:");
    scanf("%d %d",&a,&b);
    printf("\n 1->Add \n 2->Sub \n 3->Mul \n 4->Div \n 5->Mod \n Enter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\n Addition = %d",a+b);
        break;
        case 2:
            printf("\n Subtraction = %d",a-b);
        break;
        case 3:
            printf("\n Multiplication = %d",a*b);
        break;
        case 4:
            printf("\n Dividation/Division = %d",a/b);
        break;
        case 5:
            printf("\n Modulus = %d",a%b);
        break;
        default:
        printf("\n Wrong Choice");
        break;
    }
    return 0;
}
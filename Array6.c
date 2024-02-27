//  Q--> Program to search no in the array ?



#include<stdio.h>
int main()
{
    int a[10],i,flag=0,key,pos;
    for(i=0;i<10;i++)
    {
        printf("\n Enter Number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]==key)
        {
            pos=i+1;
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("\n Number Found at possition %d",pos);
    else
    printf("\n Number Not Found.");
    return 0;
}
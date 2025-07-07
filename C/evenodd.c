#include<stdio.h>
int main()
{
    int num1;
    printf("enter the to check  even or odd\n");
    scanf("%d",&num1);
    if(num1==0)
     {
        printf("number is zero");
     }
    else if(num1 % 2==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
}
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("the number is +ve \n");
    }
    else if (num < 0)
    {
        printf("Number is _ve \n");
    }
    else
    {
        printf("number is zero \n");
    }
    
}
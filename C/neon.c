#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter the number\n");
    scanf("%d",&num);
    int sqr=num*num;

    while(sqr>0)
    {
        int digit=sqr%10;
        sum+=digit;
        sqr/=10;
    }
    if(num==sum)
    {
        printf("\nnumber is neon \n");
    }
    else
    {
        printf(" \nnot a neon number\n");
    }
}
#include<stdio.h>
int main()
{
    int base,result,ch;
    int power=1;
    printf("\nenter the base");
    scanf("%d",&base);
    printf("\nenter the power");
    scanf("%d",&power);
    ch=1;

    while (ch<=power)
    {
        result=result * base;
        ch++;
        
    }
    printf("\n %d",result);

    
}
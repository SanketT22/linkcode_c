#include<stdio.h>
int main()
{
    int num1;
    int num2;
    printf("enter firts numbers\n");
    scanf("%d",&num1);

      printf("enter second numbers\n");
    scanf("%d",&num2);
    if((num1==0)&&(num2==0))
    {
        printf("both number are zero");
    }
    else if(num1>num2)
    {
        printf("number 1 is grtater whis is :\t %d \n",num1);
    }
    else if(num2>num1)
    {
        printf("number 2 is grater  which is : \t%d \n",num2);
    }
    else if (num1==num2)
    {
        printf("both number are equal");
    }
    
    
    
}
#include<stdio.h>
int main()
{
    int a=2,num,flag=0;
    printf("enter the number");
    scanf("%d",&num);

    while(a<=num/2)
    {
        if(num % a==0)
        {
            flag=1;
            break;

        }
        a++;
       
    }
      printf(flag==0 ?"\n it is prime number" : "\n is not a prime number");
}

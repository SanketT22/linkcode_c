#include<stdio.h>
int main()
{
    int i, sum;
    i=2;
    
    while (i<=20)
    {
       printf("\n %d",i);
       sum=sum+i;
       i=i+2;
    }
   printf("\n %d",sum); 
}
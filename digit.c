#include<stdio.h>
int main(){
int num,count=0;
printf("\n enter the number");
scanf("%d",&num);
while(num>0)
{
    count++;
    int digit= num%10;
    printf("%d\n",digit);
    num=num/10;
}
 printf("\ntotal coun of digit is: %d \n",count);
}

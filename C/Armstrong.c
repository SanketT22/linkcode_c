#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int count=0,temp=n,a,pow=1,sum=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    n=temp;
    while(n>0)
    {
        int digit=n%10;
        // find power
        a=1,pow=1;
        while(a<=count)
        {
            pow*=digit;
            a++;
        }
        sum+=pow;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is a Armstrong number",temp);
    }
    else{
        printf("%d is not Armstrong number",temp);
    }
}
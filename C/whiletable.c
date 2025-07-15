#include<stdio.h>
int main()
{
    int n,i;

    printf("enter anny number");
    scanf("%d",&n);
    i=1;

    while (i<=10)
    {
        printf("\n %d\t*\t%d\t=\t%d\n",n,i,n*i);
        i++;
    }
    
}
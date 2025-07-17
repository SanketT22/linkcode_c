#include<stdio.h>
int main()
{
    int a,n,b=1;
    printf("\n enter the starting number of table");
    scanf("%d",&a);
    printf("\n enter the starting number of table");
    scanf("%d",&n);

    while(a<=n)
    {   
        b=1;
        while(b<=10)
        {   
            printf("%d ",a*b);
            
            b++;
        }
        printf("\n ");
        a++;
    }


}
#include<stdio.h>
int main()
{
    int a=1,n;
    printf("enter tthe length of series");
    scanf("%d",&n);
    int first=0,second=1,third;

    while(a<=n)
    {
        printf("%d ",first);
        third=first+second;
        first=second;
        second=third;
        a++;
    }
}
#include<stdio.h>
int main()
{
    int row;
    printf("enter number of Rows");
    scanf("%d",&row);

    for(int i=1;i<=row;i++)//5
    {
        for(int j=i;j<=row;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
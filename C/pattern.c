#include<stdio.h>
int main()
{
    int row,col;
    printf("enter number of Rows And Col");
    scanf("%d%d",&row,&col);

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
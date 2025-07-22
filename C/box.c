#include<stdio.h>
int main()
{
    int row=11,col=11;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==1 || i==11 || j==1 || j==11 || i==row/2+1 || j==col/2+1 || j==i || j==col-i+1 )
            printf("* ");
        else
        printf("  ");
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    // int row,col;
    // printf("enter number of Rows And Col");
    // scanf("%d%d",&row,&col);
    int row=7;

    for(int i=1;i<=row;i++)
    {
        if(i<=row/2+1)
        {
            for(int j=1;j<=i;j++)
            {
                printf("* ");
            }
        
        }
        else{
            for(int j=row/2+2;j>=1;j--){
                printf("* ");
            }
        }
        printf("\n");
    }

}
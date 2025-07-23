#include<stdio.h>
int main()
{
    for (int i = 1; i <=5; i++)
    {
        for ( int j = 1; j <=5; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <=5; i++)
    {
        for ( int j = 1; j <=5; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <=5; i++)
    {
        for ( int j = 1; j <=5; j++){
            if(i%2==0)
            printf("0 ");
            else
            printf("1 ");

        }
       printf("\n");     
    }

    printf("\n");
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            printf(j%2!=0?"1":"0");
        }
        printf("\n");
    }

    // 
    // printf("\n");
    // int rows=5;
    // int col=65;

    // for(int i=1;i<=rows;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("%c ",(char)col);
    //         col++;
    //     }
    //     printf("\n");
    // }



    printf("\n");
    
    int rows = 5; 
    
    for (int i = 1; i <= rows; i++) {
        int current_num = i; 
        

        for (int j = 1; j <= i; j++) {
            printf("%d ", current_num);

    
            current_num += (rows - (j - 1));
        }
        printf("\n"); 
    }
    
    
   
     

    





    return 0;
}
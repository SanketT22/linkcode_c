#include<stdio.h>
int main()
{
    int len,ch;
    int sum=0,product=1;
    printf("enter the length of array");
    scanf("%d",&len);
    int arr[len];

    printf("enter the values for Array");
    for(int i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }

     printf("\n1 for sum\n2 for reverse \n3 for even odd \n4 for product");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
         for( int i=0; i<len;i++)
         sum=sum + arr[i];
        printf(" \n sum of aaray is %d \n",sum);
        break;
            
        case 2:
          for(int i=len-1;i>=0;i--)
          printf("\n %d \n",arr[i]);
          break;

        case 3:
             printf(" below  are even numbers ");  
            for(int i=0;i<len;i++)
            { 
                if(arr[i]%2==0)
                {
                    printf(" \n %d ",arr[i]);
                }
               
            }
             printf("\n below  are eodd numbers");
            for(int i=0;i<len;i++)
            {
                if(arr[i]%2!=0)
                {
                    printf("\n %d",arr[i]);
                }
            }

        case 4:

          for( int i=0; i<len;i++)
         product=product * arr[i];
        printf(" \n product of aaray is %d \n",product);
        break;

          
    }
    


}
#include<stdio.h>
int main()
{
    int ch;
    int a,b,total;
    printf("\n1 for Addition \n2 for subtraction \n3 for multiplication \n4 for division");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("\n enter first number\n");
            scanf("%d",&a);
            printf("\n enter second number\n");
            scanf("%d",&b);
            total=a+b;
            printf("\nAddition is %d \n",total);
        break;

        case 2:
             printf("\n enter first number\n");
            scanf("%d",&a);
            printf("\n enter second number\n");
            scanf("%d",&b);
            total=a-b;
            printf("\n subtraction is %d \n",total);
        break;

        case 3:
            printf("\n enter first number\n");
            scanf("%d",&a);
            printf("\n enter second number\n");
            scanf("%d",&b);
            total=a*b;
            printf("\n multiplication is %d \n",total);
        break;

        case 4:
         printf("\n enter first number\n");
            scanf("%d",&a);
            printf("\n enter second number\n");
            scanf("%d",&b);
            total=a/b;
            printf("\n divison is %d \n",total);
        break;
        default:
        printf("\ninvalid day\n");
    }
}
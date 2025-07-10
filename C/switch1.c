#include<stdio.h>
int main()
{
    int ch;
    printf("enter the number");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("\n monday\n");
        break;

        case 2:
            printf("\ntuesday\n");
        break;

        case 3:
            printf("\nwed\n");
        break;
        default:
        printf("\ninvalid day\n");
    }
}
#include<stdio.h>
int main()
{
    int i;
    i=65;
    while (i<=90)
    {
        printf("\t%d : %c\n| %d : %c",i,i,i+32,i+32);
        i++;
    }
    printf("\nthankyou");
}
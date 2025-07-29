#include<stdio.h>
#include<string.h>
int  main()
{
    printf("enter your name");
    char name[20];
    scanf("%s",name);
    int len;
    for(len=0;name[len]!='\0';len++);
    for(int i=len-1;i>=0;i--)
    {
        printf("%s",name);
    }
    
}
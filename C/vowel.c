#include<stdio.h>
int main()
{
    char alpha;
    printf("enter the Character to check");
    scanf("%c",&alpha);

    if((alpha=='a')||(alpha=='e')||(alpha=='i')||(alpha=='o')||(alpha=='u'))
    {
        printf("it is a small vowel");
    }
    else if((alpha=='A')||(alpha=='E')||(alpha=='I')||(alpha=='O')||(alpha=='U'))
    {
        printf("it is a big vowel");
    }
    else if((alpha>=65)&&(alpha<=90))
    {
        printf("Capital Character");
    }
    else if((alpha>=97)&&(alpha<=122))
    {
        printf("Small Character");
    }
    else{
        printf("IT is other character");
    }
}

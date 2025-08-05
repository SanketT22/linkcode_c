#include<stdio.h>
#include<string.h>
void sort(char str[])
{
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(str[j]>str[j+1])
            {
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
}

int main()
{
    char str[]="dcba";
    printf("original str: %s\n",str);
    sort(str);
    printf("sorted str: %s \n",str);
    return 0;
}
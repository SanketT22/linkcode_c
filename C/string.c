#include<stdio.h>
#include<string.h>
int main() 
{
    // char name[6]={'h','e','l','l','\0'} // \0  dfines end of string
    char name [20];
    scanf("%s",name);
    // fgets(name,sizeof(name),stdin);
    int i;
    for(i=0;name[i]!='\0';i++){
    printf("   %c \n",name[i]);
    
    }

    

}
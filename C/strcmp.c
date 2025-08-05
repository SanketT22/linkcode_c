#include<stdio.h>
// #include<string.h>
int cmpr(char str1[],char str2[])
{
    int i=0;
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            return str1[i]-str2[i];
        }
        i++;
    }
    return str1[i]-str2[i];
}
int main()
{
  char str1[]="apple";
  char str2[]="banana";
  int value=cmpr(str1,str2);

  if(value==0)
  {
    printf("both strings are equal");
  }
  else if(value<0)
  {
    printf("str2 is greater than str1");
  }
  else{
    printf("str1 is greater than str2");
  }

}
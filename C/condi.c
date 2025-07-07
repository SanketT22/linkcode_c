#include<stdio.h>

int main(){
       int age;
       printf("enter your age");
       scanf("%d",&age);

       if(age<0)
       {
         age=-age;

       }
       printf("age is %d \n" ,age);
}     
#include <stdio.h>
int main()
{
    int a=10; //a=10   &a= a100
    int *p=&a; // a100
    *p=23;
    printf("value of a %d \n",a);
    printf("adress of a %p \n",&a);
    printf("value of p %p \n",p);
    printf("value of p %d \n",*p);
    return 0;
}
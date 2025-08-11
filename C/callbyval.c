#include<stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
     printf("value of a and b respectively in swap function: %d    %d\n", *a, *b);
}
int main(){
    int a=1;
    int b=2;
    printf("value of a and b respectively before swapping: %d    %d\n", a, b);
    swap(&a,&b);
    printf("value of a and b respectively after swapping: %d    %d", a, b);
}
/
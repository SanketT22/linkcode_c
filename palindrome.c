#include<stdio.h>

int main() {
    int num, rev = 0, org;

    printf("\nEnter the number: ");
    scanf("%d", &num);

    org = num; 

    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    printf("\nReversed number is: %d", rev);

    if (org == rev) {
        printf("\nIt is a palindrome");
    } else {
        printf("\nNot a palindrome");
    }

    return 0;
}

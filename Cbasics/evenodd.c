#include<stdio.h>
int main() {
    printf("Enter a Number ");
    int num;
    scanf("%d", &num);
    (num % 2 == 0) ? printf("Even Number\n") :printf("Odd Number\n");
    return 0;
}
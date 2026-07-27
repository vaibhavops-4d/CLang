#include<stdio.h>
int main() {
    printf("Enter the numbers to find the smallest among them:");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    num1 > num2 ? printf("%d is the smallest number", num2) : printf("%d is the smallest number", num1);
    return 0;
}
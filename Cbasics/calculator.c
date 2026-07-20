#include<stdio.h>
#include<math.h>
int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Add: %d\n", num1 + num2);
    printf("Subtract: %d\n", num1 - num2);
    printf("Multiply: %d\n", num1 * num2);
    printf("Divide: %d\n", num1 / num2);
    return 0;
}
#include<stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers to check their sum: ");
    scanf("%d %d", &num1, &num2);
    if(num1 + num2 > 10)
        {
        printf("The sum of %d and %d is greater than 10\n", num1, num2);
        }
    else
        {
        printf("The sum of %d and %d is not greater than 10\n", num1, num2);
        }
    return 0;    
}
#include<stdio.h>
int main() {
    float num1, num2, num3;
    printf("Enter the numbers whose avg needs to be found:");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("The avg of %f, %f, %f is %f", num1, num2, num3, num1 + num2 + num3 / 3);
    return 0;
}
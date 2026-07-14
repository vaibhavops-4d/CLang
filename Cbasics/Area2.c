#include <stdio.h>
int main() {
    float pi=3.14;
    float side;
    printf("Enter the side of the Square:");
    scanf("%f", &side);
    printf("Area of square with side %f is %f", side, pi * side * side);
    return 0;
}
#include <stdio.h>

int main() {
    float side;
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    printf("Area of square with side %f is %f", side, side * side);
    return 0;
}    


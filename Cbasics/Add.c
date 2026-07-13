#include <stdio.h>

int main() {
    int NUM1, NUM2;
    printf("Enter First Number: \n");
    scanf("%d", &NUM1);
    printf("Enter Second Number: \n");
    scanf("%d", &NUM2);
    int SUM = NUM1+ NUM2;
    printf("The Sum of %d and %d is %d \n", NUM1, NUM2, SUM);
    return 0;
}
#include<stdio.h>
int main() {
    printf("To Print Greater Number\n");
    int num1, a , b;
    printf("Input two numbers:");
    scanf("%d", &a);
    scanf("%d", &b);
    num1=(a>b) ? a : b;
    printf("%d", num1 );
    return 0;
}
#include<stdio.h>
int main() {
    char Character;
    printf("Enter a character:");
    scanf("%c", &Character);
    (Character >= '0' && Character <= '9') ? printf("The character entered is a digit") : printf("The character entered is not a digit");
    return 0;
}
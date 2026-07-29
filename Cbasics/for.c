#include<stdio.h>
int main() {
    char* name;
    int i;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("No of times to print your name: ");
    scanf("%d", &i);
    for (int j = 0; j < i; j++) 
        printf("%s\n", name);
    return 0;    
}
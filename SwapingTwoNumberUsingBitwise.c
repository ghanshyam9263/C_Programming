#include <stdio.h>

int main() {
    int a, b;

     printf(" swapping Two number using two ver\n");
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: %d %d ", a, b);

    
    a = a ^ b; 
    b = a ^ b; 
    a = a ^ b; 

    printf("After swapping: %d %d ", a, b);

    return 0;
}


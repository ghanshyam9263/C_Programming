#include <stdio.h>

int main() {
    int num;
     printf("Find the Odd/Even using Bitwise Operator.\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num & 1) {
        printf("%d is an odd number.\n", num);
    } else {
        printf("%d is an even number.\n", num);
    }

    return 0;
}

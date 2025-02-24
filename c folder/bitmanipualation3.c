#include <stdio.h>


int countBitsToFlip(int A, int B) {
    int xor = A ^ B;
    
    
    int count = 0;
    while (xor) {
        count += xor & 1; 
        xor >>= 1;
    }
    
    return count;
}

int main() {
    int A1 = 10, B1 = 20;
    int A2 = 7, B2 = 10;

    printf("Number of bits to flip to convert %d to %d: %d\n", A1, B1, countBitsToFlip(A1, B1));
    printf("Number of bits to flip to convert %d to %d: %d\n", A2, B2, countBitsToFlip(A2, B2));

    return 0;
}


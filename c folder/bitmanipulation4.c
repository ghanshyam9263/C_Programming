#include <stdio.h>

int divide(int dividend, int divisor) {
    if (divisor == 0) {
        printf("Division by zero is undefined.\n");
        return 0;
    }

    int quotient = 0;
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1; 

    
    int absDividend = dividend < 0 ? -dividend : dividend;
    int absDivisor = divisor < 0 ? -divisor : divisor;

   
    while (absDividend >= absDivisor) {
        absDividend -= absDivisor;
        quotient++;
    }

    return sign * quotient;
}

int main() {
    int a, b;

 
    printf("Enter the dividend (a): ");
    scanf("%d", &a);
    printf("Enter the divisor (b): ");
    scanf("%d", &b);

   
    int result = divide(a, b);

   
    printf("Quotient after dividing %d by %d: %d\n", a, b, result);

    return 0;
}


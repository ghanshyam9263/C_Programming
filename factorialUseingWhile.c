#include <stdio.h>

int main() {
    int n, i = 1;
    long long f = 1;

    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    while (i <= n) {
        f *= i;
        i++;
    }

    printf("Factorial of %d is %lld\n", n, f);
}

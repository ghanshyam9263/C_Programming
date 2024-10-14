#include <stdio.h>

int main() {
    int n, i;
    double h = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        h=h+ 1.0 / i;
    }

    printf("Harmonic series sum up to %d terms is: %lf\n", n, h);

    return 0;
}

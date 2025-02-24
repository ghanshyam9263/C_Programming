#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the range: ");
    scanf("%d", &n);

  
    printf("Harmonic Sequence is: ");
    for (i = 1; i <= n; i++) {
        printf("1/%d", i);
        if (i < n) {
            printf(" + ");
        }

       
        sum += 1.0 / i;
    }

    
    printf("\nSum of harmonic series: %.6f\n", sum);

    return 0;
}


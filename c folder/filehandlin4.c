#include <stdio.h>
#include <stdbool.h>
 int i;
// Function to check if a number is prime
bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for ( i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    FILE *file = fopen("Prime.txt", "w"); // Open the file in write mode

    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    fprintf(file, "Prime numbers between 1 and 100:\n");

    for ( i = 1; i <= 100; i++) {
        if (is_prime(i)) {
            fprintf(file, "%d\n", i); // Write the prime number to the file
        }
    }

    fclose(file); // Close the file
    printf("Prime numbers have been written to Prime.txt successfully.\n");

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
  int i,j;
int chocolateDistribution(int A[], int N, int M) {
    if (M > N) {
        return -1; 
    }

   
    for ( i = 0; i < N - 1; i++) {
        for ( j = i + 1; j < N; j++) {
            if (A[i] > A[j]) {
                
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    
    int minDiff = A[M - 1] - A[0];

   
    for ( i = 1; i <= N - M; i++) {
        int diff = A[i + M - 1] - A[i];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    return minDiff;
}

int main() {
    int A[] = {12, 4, 7, 9, 2, 23, 25, 41, 40, 40, 30, 40, 40};
    int N = sizeof(A) / sizeof(A[0]);
    int M = 7; 

    int result = chocolateDistribution(A, N, M);

    if (result != -1) {
        printf("The minimum difference is: %d\n", result);
    } else {
        printf("Not enough chocolates for all students\n");
    }

    return 0;
}


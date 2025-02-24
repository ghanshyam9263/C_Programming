#include <stdio.h>
int i,j;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortInWave(int arr[], int n) {
    for ( i = 0; i < n-1; i++) {
        for ( j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
    
   
    for ( i = 0; i < n-1; i += 2) {
        swap(&arr[i], &arr[i+1]);
    }
}

void printArray(int arr[], int n) {
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 5, 6, 3, 2, 20, 100, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    printArray(arr, n);
    
    sortInWave(arr, n);
    
    printf("Array in wave form: ");
    printArray(arr, n);
    
    return 0;
}


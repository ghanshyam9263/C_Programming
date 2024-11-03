#include <stdio.h>

int main() {
    int calls;
    float bill;


    printf("Enter the number of calls made: ");
    scanf("%d", &calls);

   
    if (calls <= 50) {
        bill = 100.0;  
    } else if (calls <= 100) {
        bill = 100.0 + (calls - 50) * 0.80;  
    } else if (calls <= 200) {
        bill = 100.0 + 50 * 0.80 + (calls - 100) * 0.60;  
    } else {
        bill = 100.0 + 50 * 0.80 + 100 * 0.60 + (calls - 200) * 0.40;  
    }

   
    printf("Total telephone bill for %d calls is: Rs. %.2f\n", calls, bill);

    return 0;
}


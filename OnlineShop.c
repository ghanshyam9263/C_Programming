#include <stdio.h>

int main() {
    int ringType, Engravings;
    float totalPrice = 0;

    
    printf("Select the type of ring:\n");
    printf("1. Gold Plated Ring Cost: Rs. 500, Engraving Cost: Rs. 70.30 p/unit)\n");
    printf("2. Solid Gold Ring Cost: Rs. 1000, Engraving Cost: Rs. 10.40 p/ unit)\n");
    printf("3. Silver Plated Ring Cost: Rs. 300, Engraving Cost: Rs. 5.10 per unit)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &ringType);

    
    printf("Enter the number of engravings: ");
    scanf("%d", &Engravings);

    switch (ringType) {
        case 1: 
            totalPrice = 500 + (Engravings * 70.30);
            break;
        case 2: 
            totalPrice = 1000 + (Engravings * 10.40);
            break;
        case 3: 
            totalPrice = 300 + (Engravings * 5.10);
            break;
        default:
            printf("Invalid ring type selected!\n");
            return 1; 
    }

    
    printf("\nThe total cost of the ring is: Rs. %.2f\n", totalPrice);

    return 0;
}


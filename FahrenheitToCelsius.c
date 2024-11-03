#include <stdio.h>

int main() {
    float temperature, convertedTemperature;
    int choice;

    
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Choose conversion (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature - 32) * 5 / 9;
        printf(" %.2f°C\n", convertedTemperature);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature * 9 / 5) + 32;
        printf(" %.2f°F\n", convertedTemperature);
    } else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}


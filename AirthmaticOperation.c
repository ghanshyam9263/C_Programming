#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

 
  result = (operator == '+') ? (num1 + num2) : (operator == '-') ? (num1 - num2) : (operator == '*') ? (num1 * num2) : (operator == '/' && num2 != 0) ? (num1 / num2) : 0;

   
    if ((operator == '/' && num2 == 0) || (operator != '+' && operator != '-' && operator != '*' && operator != '/')) {
        printf("Invalid operation\n");
    } else {
        printf("Result: %.2f\n", result);
    }

    return 0;
}


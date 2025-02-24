#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void number_guessing_game() {
    int secret_number, guess, guesses = 0;

  
    srand(time(0));
    
   
    secret_number = (rand() % 100) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I am thinking of a number between 1 and 100.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        guesses++;

        if (guess < secret_number) {
            printf("Higher number please.\n");
        } else if (guess > secret_number) {
            printf("Lower number please.\n");
        } else {
            printf("Congratulations! You guessed the number %d correctly in %d guesses.\n", secret_number, guesses);
            break;
        }
    }
}

int main() {
    number_guessing_game();
   return 0;
}


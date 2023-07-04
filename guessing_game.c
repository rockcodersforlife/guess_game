#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    
    srand(time(NULL));
    secretNumber = rand() % 100 + 1;  // Generates a random number between 1 and 100

    printf("Welcome to the Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == secretNumber) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    return 0;
}

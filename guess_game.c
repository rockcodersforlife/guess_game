#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, numGuesses = 0;
    int maxGuesses = 5;
    int isCorrect = 0;

    // Generate a random number between 1 and 100
    srand(time(NULL));
    secretNumber = rand() % 100 + 1;

    printf("Welcome to Guess the Number!\n");
    printf("I'm thinking of a number between 1 and 100.\n");
    printf("You have %d attempts to guess the number.\n\n", maxGuesses);

    while (numGuesses < maxGuesses) {
        printf("Guess #%d: ", numGuesses + 1);
        scanf("%d", &guess);

        if (guess == secretNumber) {
            isCorrect = 1;
            break;
        } else if (guess < secretNumber) {
            printf("Too low! Try a higher number.\n\n");
        } else {
            printf("Too high! Try a lower number.\n\n");
        }

        numGuesses++;
    }

    printf("\n");

    if (isCorrect) {
        printf("Congratulations! You guessed the number %d correctly!\n", secretNumber);
        printf("You took %d guesses.\n", numGuesses + 1);
    } else {
        printf("Sorry, you did not guess the number %d.\n", secretNumber);
        printf("Better luck next time!\n");
    }

    return 0;
}

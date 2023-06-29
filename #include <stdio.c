#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess;
    int playerGuess;
    int attempts = 0;
    int maxAttempts = 5;

    // Initialize the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    numberToGuess = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &playerGuess);

        attempts++;

        if (playerGuess == numberToGuess) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        } else if (playerGuess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    if (attempts == maxAttempts) {
        printf("Sorry, you ran out of attempts. The number I was thinking of was %d.\n", numberToGuess);
    }

    return 0;
}

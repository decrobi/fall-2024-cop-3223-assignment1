//********************************************************
//
// Author: Declan Robinson
// Class: COP 3223, Professor Parra
// Purpose: This program can play the guess the number game while choosing a random number for the user to guess
// Input: users guess for the number on what it could be
// Output: a response to the input in regards to how correct it is
//
// //********************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void playGame();
int getRandomNumber(int min, int max);

int main() {
    // Seed the random number generator
    srand(time(0));

    // Start the game
    playGame();

    return 0;
}

// Function to handle the main gameplay
void playGame() {
    int randomNumber = getRandomNumber(1, 10);
    int guess;
    int attempts = 3;

    printf("Guess the number (between 1 and 10). You will have 3 attempts.\n");

    // Loop to give the user up to 3 attempts
    for (int i = 0; i < attempts; i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == randomNumber) {
            printf("Congratulations! You guessed the number.\n");
            return;
        } else if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    // If all attempts are used and the number isn't guessed
    printf("Sorry, you've used all your attempts. The number was: %d\n", randomNumber);
}

// Function to generate a random number between min and max
int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

#include <stdio.h>
#include <stdlib.h> // For rand and srand
#include <time.h>   // For time

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int num_of_guess = 0;
    int guessed;

    // Print the random number
    // printf("Random number: %d\n", randomNumber);
    printf("Guess the numbers");

    do
    {
        printf("Guess the number");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("Lower number please\n");
        }
        else{ 
            printf("Higher number please\n");
        }
        num_of_guess++;

    } while (guessed!= randomNumber);
    printf("You guessed the number in %d guesses\n", num_of_guess);

    return 0;
}

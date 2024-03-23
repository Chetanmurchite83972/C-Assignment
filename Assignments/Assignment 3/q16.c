#include<stdio.h>
#include<stdlib.h>

//Write a program to develop a very simple version of the ''guess the magic number" game. The
//program generates a random magic number between 1 and 1000. Ask user to guess the
//number. If guess is correct then print message “congrats! You won.” if the guess is less than
//magic number print the message ** left ** otherwise print the message ** right **. Repeat the
//procedure till player give accurate guess. Give maximum 10 chances to user.
//Note: generates the magic number using the standard random number generator rand( ), which
//returns an arbitrary number between 0 and RAND_MAX (which defines an integer value that
//is 32,767 or larger). The rand( ) function requires the header <stdlib.h>.

int main() {
    int magicNumber, guess, attempts = 0;

    // Generate a random magic number between 1 and 1000
    srand(time(0)); // Seed for the random number generator
    magicNumber = rand() % 1000 + 1; // Generate a random number between 1 and 1000

   
     printf("Welcome to the Guess the Magic Number game!\n");
     printf("You have 10 chances to guess the magic number.\n");

    // Ask user to guess the number within 10 attempts
    while (attempts < 10) {
        printf("Enter your guess (between 1 and 1000): ");
        scanf("%d", &guess);

        if (guess == magicNumber) {
            printf("Congratulations! You won.\n");
            break;
        } else if (guess < magicNumber) {
            printf("Left\n");
        } else {
            printf("Right\n");
        }

        attempts++;
    }

    // If user couldn't guess the number within 10 attempts
    if (attempts == 10) {
        printf("Sorry, you couldn't guess the magic number. It was %d.\n", magicNumber);
     }
   
   
   return 0;
   }


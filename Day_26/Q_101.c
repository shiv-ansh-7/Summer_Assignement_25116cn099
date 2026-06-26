55#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;
    srand(time(0));
    secret_number = (rand() % 100) + 1; 
 printf("Welcome to the Number Guessing Game\n");
 do {
  printf("Guess a number between 1 and 100: ");
      if (scanf("%d", &guess) != 1) {
      printf("Invalid input! Please enter a valid number.\n");
       while (getchar() != '\n'); 
          continue;
        }
      attempts++;
 if (guess < secret_number) {
            printf("Too low! Try again.\n\n");
        } else if (guess > secret_number) {
                 printf("Too high! Try again.\n\n");
        } else {
            printf("CongratulationsYou guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secret_number);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); 
    int n , target;
    int guess, attempts = 0; 
    printf("Welcome to the Number Guessing Game!\n");
    printf("Enter your difficulty level\n");
    printf("1.Easy\n2.Medium\n3.Hard\n");
    scanf("%d", &n);
    if (n==1) target = (rand() %100) + 1;
    if (n==2) target = (rand() %500) + 1;
    if (n==3) target = (rand() % 1000) + 1;
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > target) {
            printf("Too high! Try again.\n");
        } else if (guess < target) {
            printf("Too low! Try again.\n");
        } else {
            printf("\nCongratulations! You guessed the number in %d %s!\n",
                   attempts, (attempts == 1) ? "attempt" : "attempts");
        }
    } while (guess != target);
    printf("      Created by MR.Ammar Ul Haq\n");
    return 0;
}
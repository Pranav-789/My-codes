#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 to 100
    int guessed;
    char choice;

    // //Print the random number
    // printf("The random numbmer: %d", randomNumber);

    do{
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;

    do{
    printf("Guess the number\n");
    scanf("%d", &guessed);
    if(guessed>randomNumber){
        printf("lower number please\n");
    }
    else if (guessed<randomNumber){
        printf("Higher number please\n");
    }
    else {
        printf("Congrats!!\n");
    }
    no_of_guesses++;

    }while(guessed!=randomNumber);

    printf("You guessed the number in %d guesses\n", no_of_guesses);

    printf("\nEnter 'y' to play again");
    scanf(" %c", &choice);

    }while(choice=='y'|| choice=='Y');

    printf("See you again!\n");

    return 0;
}
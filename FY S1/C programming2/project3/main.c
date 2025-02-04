#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main () {
    srand(time(0));
    char choice;
    int player, computer;
    computer = rand() % 3;
    /*
    0->rock
    1->paper
    2->scissor
    */

   do
   {
   printf("Choose 0 for rock, 1 for paper, 2 for scissor: ");
   scanf("%d", &player);

   if (computer == 0)
   {
    printf("Computer chose 'rock' \n");
   }

   else if (computer == 1)
   {
    printf("Computer chose 'paper' \n");
   }

   else
   {
    printf("Computer chose 'scissor' \n");
   }
   
   printf("The results are: \n");
   

    if (player == 2 && computer==0)
   {
    printf("You lost\n");
   }
   else if (player == 2 && computer==1)
   {
    printf("You won\n");
   }
   else if (player == 0 && computer==1)
   {
    printf("You lost\n");
   }
   else if (player == 0 && computer==2)
   {
    printf("You won\n");
   }
   else if (player == 1 && computer==0)
   {
    printf("You won\n");
   }

   else if (player == 1 && computer==2)
   {
    printf("You lost\n");
   }
   else if (player == computer)
   {
    printf("draw\n");
   }

   printf("Do you want to play further?(y/n) ");
   scanf(" %c", &choice);

   } while (choice == 'y' || choice == 'Y');
   
   printf("\nSee you again!");
    return 0;
}
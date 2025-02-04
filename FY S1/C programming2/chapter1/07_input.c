#include <stdio.h>

int main() {
    char again;

    do
    {
    int choice;
    printf("Choose the type of input:\n");
    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Character\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            printf("The size of int is: %d  bytes\n", sizeof(int));
            break;
        }
        case 2: {
            printf("The size of float is: %d bytes\n", sizeof(float));
            break;
        }
        case 3: {
            printf("The size of character is: %d bytes\n", sizeof(char));
            break;
        }
        default:
            printf("Invalid choice.\n");
            break;
    }

    printf("Do you want to continue further?(y/n): ");
    scanf(" %c", &again);

    } while (again=='y'|| again=='Y');
    
    printf("See you again, bye-bye!");

    return 0;
}

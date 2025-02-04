// #include<stdio.h>

// int main () {
//     FILE *ptr;
//     ptr = fopen("Pokemon.txt", "r");

//     if (ptr == NULL)
//     {
//         printf("The file does not exist");
//     }
//     else
//     {
//         int num;
//         fscanf(ptr, "%d", &num);
//         printf("The value of nume is %d", num);
//     }

//     return 0;
// }

#include<stdio.h>

int main () {
    FILE *ptr;
    ptr = fopen("new.txt", "a");

    if(ptr == NULL){
        printf("The file does not exist!\n");
    }

    int num = 432;

    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}
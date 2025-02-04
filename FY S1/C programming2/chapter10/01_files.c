// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("pranav.txt", "r"); // to access the file
//     int num;
//     fscanf(ptr, "%d", &num); // to take input from the file
//     printf("The value of nume is %d\n", num);

//     fscanf(ptr, "%d", &num);
//     printf("The value of nume is %d", num);

//     fclose(ptr); // closes the accessed file

//     return 0;
// }

#include<stdio.h>

int main () {
    FILE *ptr;
    ptr = fopen("new.txt", "r"); // for reading
    if(ptr == NULL){
        printf("The file does not exist");
    }
    else{
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is: %d\n", num);

        fscanf(ptr, "%d", &num);
        printf("The value of num is: %d\n", num);

        fclose(ptr);
    }
    return 0;
}
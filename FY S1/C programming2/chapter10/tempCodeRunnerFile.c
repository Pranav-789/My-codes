#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("pranav.txt", "r"); // to access the file
    int num;
    fscanf(ptr, "%d", &num); // to take input from the file
    printf("The value of nume is %d", num);

    fscanf(ptr, "%d", &num);
    printf("The value of nume is %d", num);

    fclose(ptr); // closes the accessed file

    return 0;
}
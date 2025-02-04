#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "a");
    int num = 432;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    // append mode will not erase all data from file and then write data
    return 0;
}
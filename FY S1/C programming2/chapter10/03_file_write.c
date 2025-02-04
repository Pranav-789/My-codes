#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("pranav.txt", "w");
    int num = 432;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    // write mode will erase all data from file and then write data
    return 0;
}
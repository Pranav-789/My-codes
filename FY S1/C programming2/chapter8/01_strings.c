#include <stdio.h>

int main()
{
    // char st [] = {'a', 'b', 'c', '\0'}; // '\0' is a null character wich marks the termination of array
    char st[] = "abc"; // same as above, in double quotes null character is already there

    for (int i = 0; i < 3; i++)
    {
        printf("The character at index %d is %c\n", i, st[i]);
    }

    return 0;
}
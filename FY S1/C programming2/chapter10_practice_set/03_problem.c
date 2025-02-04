#include <stdio.h>

int main()
{
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("integer.txt", "r");
    ptr2 = fopen("integer2.txt", "a");
    char ch;
    while (1)
    {
        ch = fgetc(ptr);
        
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }

    fclose(ptr);
    fclose(ptr2);

    return 0;
}
#include <stdio.h>
#include<string.h>

int main()
{
    char str[] = "cacao";
    char c;
    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'c')
        {
            count++;
        }
        
    }

    printf("%d", count);
    return 0;
}
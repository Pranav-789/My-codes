#include <stdio.h>
#include<string.h>

int main()
{
    char str[] = "cacao";
    char c;
    int contain = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'c')
        {
            contain = 1;
            break;
        }
        
    }

    if (contain == 1)
    {
        printf("Yes it contains\n");
    } else
    {
        printf("It does not contain");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int check(char *str, int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        if (str[s] != str[e])
        {
            printf("Not an palindrome\n");

            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    printf("It's a palindrome");
}

int main()
{
    char arr[100] = "recar";
    check(arr, strlen(arr));
    return 0;
}
#include <stdio.h>

int mystrlen(char st[])
{
    int i = 0, count;
    char c = st[i];
    while (c != '\0')
    {
        c = st[i];
        i++;
    }
    count = i - 1;
    return count;
}

void mystrcpy(char m[], char n[])
{
    for (int i = 0; i < mystrlen(n); i++)
    {
        m[i] = n[i];
    }
    m[mystrlen(n)] = '\0';
}

int main()
{
    char source[7] = "pranav";
    char target[30];
    mystrcpy(target, source);
    printf("%s %s", source, target);
    return 0;
}
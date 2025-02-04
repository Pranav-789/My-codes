#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Pranav";
    char a1[56] = "Pranav";
    char a2[56] = "bhai";
    printf("%d\n", strlen(st));

    char target[30];
    strcpy(target, st); // used to copy content of second string into first string
    printf("%s %s\n", st, target);

    strcat(a1, a2); // connect to two strings

    printf("%s %s\n", a1, a2);

    int a = strcmp("far", "joke"); // compares two words based on ASCII values
    // if first word comes first then it gives -ve value, if second word comes first then +ve value

    

    return 0;
}

/*
&&
||
>=
<=
==
*/
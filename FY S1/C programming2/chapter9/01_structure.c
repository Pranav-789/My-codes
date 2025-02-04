#include<stdio.h>
#include<string.h>

struct employee // structure is defined above main
{
    int code;
    float salary;
    char name[10];
}; // semicolon is imp


int main () {
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "Pranav"); // used to store data in a string
    e1.salary = 124.5; //lpa

    printf("%d %flpa %s", e1.code, e1.salary, e1.name);

    return 0;
}
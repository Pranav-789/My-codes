#include <stdio.h>
#include <string.h>

typedef struct employee // structure is defined above main
{
    int code;
    float salary;
    char name[10];
} Emp;

int main()
{
    // typedef int pranav;
    // pranav a = 888;
    // printf("The value of a is %d", a);
    Emp e1;
    Emp* ptr = &e1;
    e1.code = 4511;
    strcpy(e1.name, "Pranav"); // used to store data in a string
    e1.salary = 124.5;         // lpa

    printf("%d %.2flpa %s\n", e1.code, e1.salary, e1.name);
    printf("%d %.2flpa %s", ptr->code, ptr->salary, ptr->name);
    return 0;
}
#include<stdio.h>
#include<string.h>

struct employee // structure is defined above main
{
    int code;
    float salary;
    char name[10];
};

int main () {
    struct employee e1;
    e1.code = 989;
    struct employee *ptr;
    // ptr is storing address of employee structure
    ptr = &e1;
    printf("%d\n", (*ptr).code);
    printf("%d", ptr->code); // same as (*ptr).code
    return 0;
}
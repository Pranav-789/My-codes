#include<stdio.h>
#include<string.h>

struct employee // structure is defined above main
{
    int code;
    float salary;
    char name[10];
};

int main () {
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[1].code = 101;

    struct employee abc = {102, 67.22, "abc"};
    printf("%d %.2flpa %s", abc.code, abc.salary, abc.name);
    return 0;
}
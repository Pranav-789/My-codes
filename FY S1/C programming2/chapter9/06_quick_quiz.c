#include<stdio.h>
#include<string.h>

struct employee // structure is defined above main
{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e){
    printf("%d %f %s", e.code, e.salary, e.name);
}

int main () {
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "Pranav");
    e1.salary = 124.5;

    show(e1);
    return 0;
}
#include<stdio.h>

struct student{
    char name[10];
    int age;
};

int main () {
    struct student s1 = {"Pranav", 18};
    struct student *ptr = &s1;

    printf("The address of the structure is %p\n", *ptr);
    printf("\nThe value of the structure members are: \n");

    // printf("%s\n", (*ptr).name);
    // printf("%d\n", (*ptr).age);

    printf("%s\n", ptr->name);
    printf("%d\n", ptr->age);

    return 0;
}
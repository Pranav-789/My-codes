#include<stdio.h>

struct student{
    char name[20];
    int age;
    float marks;
};

struct student get_std_data(){
    struct student s;
    printf("Enter name: ");     scanf("%s", s.name);
    printf("Enter age: ");      scanf("%d", &s.age);
    printf("Enter marks: ");    scanf("%f", &s.marks);
    return s;
};

int main () {
    struct student s1 = get_std_data();
    printf(" %s\t %d\t %f\t", s1.name, s1.age, s1.marks);
    return 0;
}
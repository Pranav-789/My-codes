#include<stdio.h>

typedef struct emp{
    int salary;
    float score;
} Employee;


int main () {
    Employee e1;
    Employee* ptr1 = &e1;
   // (*ptr1).salary = 56;
    ptr1->salary = 56; // same as above
    ptr1->score = 44.5;
    printf("The salary of employee e1 is %d and score is %.2f\n",ptr1->salary, ptr1->score);

    return 0;
}
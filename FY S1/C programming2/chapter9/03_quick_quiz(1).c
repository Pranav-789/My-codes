#include <stdio.h>
#include <string.h>

struct employee // structure is defined above main
{
    int code;
    float salary;
    char name[10];
};

int main() {
    struct employee employee[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of code\n");
    scanf("%d", &employee[i].code);

    printf("Enter the value of salary\n");
    scanf("%f", &employee[i].salary);

    printf("Enter the value of name\n");
    scanf("%s", &employee[i].name);

    printf("%d %flpa %s\n", employee[i].code, employee[i].salary, employee[i].name);
    }
    
    return 0;
}
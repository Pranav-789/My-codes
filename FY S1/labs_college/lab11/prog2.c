#include<stdio.h>
#include<string.h>

struct students{
    int mis;
    char name[50];
    char dep[10];
    char course[10];
    int YOJ;
};

int main(){
    struct students s[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter MIS  of student %d: ", i+1);
        scanf("%d", &s[i].mis);

        printf("Enter name of student %d: ", i+1);
        scanf(" %[^\n]", s[i].name);

        printf("Enter department of student %d: ", i+1);
        scanf("%s", s[i].dep);

        printf("Enter couse of student %d: ", i+1);
        scanf("%s", s[i].course);

        printf("Enter Year of joining of student %d: ", i+1);
        scanf("%d", &s[i].YOJ);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Student %d: \n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("MIS: %d\n", s[i].mis);
        printf("Course: %s\n", s[i].course);
        printf("Department: %s\n", s[i].dep);
        printf("Year of joining: %d\n", s[i].YOJ);
        printf("\n");
    }
    
    return 0;
}
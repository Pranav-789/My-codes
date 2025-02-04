#include<stdio.h>
#include<stdlib.h>

struct student{
    int MIS;
    char name[50];
    char dep[50];
    char course[50];
    int yoj;
};

int main () {
    struct student *students;
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    students = (struct student*)malloc(n * sizeof(struct student));
    if(students == NULL){
        printf("Error! memory not allocated.\n");
        return 0;
    }

    for(int i = 0; i < n; i++){
        printf("Enter details for student %d: \n", i+1);
        printf("MIS number: ");
        scanf("%d", &students[i].MIS);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].dep);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of joining: ");
        scanf("%d", &students[i].yoj);
    }

    printf("Students Data: \n");
    for (int i = 0; i < n; i++){
        printf("Details for student %d: \n", i+1);
        printf("MIS number: %d\n", students[i].MIS);
        printf("Name: %s\n", students[i].name);
        printf("Department: %s\n", students[i].dep);
        printf("Course: %s\n", students[i].course);
        printf("Year of joining: %d\n", students[i].yoj);
        printf("\n");
    }
    free(students);
    return 0;
}
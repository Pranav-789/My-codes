Question 1.)
#include <stdio.h>

struct Student {
    int mis_number;
    char name[100];
    char department[50];
    char course[50];
    int year_of_joining;
};

int main() {
    struct Student s1, s2;

    printf("Enter MIS number of student 1: ");
    scanf("%d", &s1.mis_number);

    printf("Enter name of student 1: ");
    scanf(" %[^\n]", s1.name);

    printf("Enter department of student 1: ");
    scanf(" %[^\n]", s1.department);

    printf("Enter course of student 1: ");
    scanf(" %[^\n]", s1.course);

    printf("Enter year of joining of student 1: ");
    scanf("%d", &s1.year_of_joining);

    printf("Enter MIS number of student 2: ");
    scanf("%d", &s2.mis_number);

    printf("Enter name of student 2: ");
    scanf(" %[^\n]", s2.name);

    printf("Enter department of student 2: ");
    scanf(" %[^\n]", s2.department);

    printf("Enter course of student 2: ");
    scanf(" %[^\n]", s2.course);

    printf("Enter year of joining of student 2: ");
    scanf("%d", &s2.year_of_joining);

    printf("\nStudent Data:\n");

    printf("MIS Number: %d\n", s1.mis_number);
    printf("Name: %s\n", s1.name);
    printf("Department: %s\n", s1.department);
    printf("Course: %s\n", s1.course);
    printf("Year of Joining: %d\n\n", s1.year_of_joining);

    printf("MIS Number: %d\n", s2.mis_number);
    printf("Name: %s\n", s2.name);
    printf("Department: %s\n", s2.department);
    printf("Course: %s\n", s2.course);
    printf("Year of Joining: %d\n", s2.year_of_joining);

    return 0;
}

Question 2.)
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

Question 3.)
#include<stdio.h>
#include<string.h>

typedef struct st_date{
    int date;
    char month[4];
    int year;
} sdate;

int main () {
    sdate s1, s2;

    printf("Enter the date of s1: ");
    scanf("%d", s1.date);

    printf("Enter the month of s1: ");
    scanf("%s", s1.month);

    printf("Enter the year of s1: ");
    scanf("%d", s1.year);
    printf("\n");
    printf("Enter the date of s2: ");
    scanf("%d", s2.date);

    printf("Enter the month of s2: ");
    scanf("%s", s2.month);

    printf("Enter the year of s2: ");
    scanf("%d", s2.year);

    if (s1.date == s2.date && strcmp(s1.month, s2.month) == 0 && s1.year == s2.year){
        printf("Equal\n");
    }
    else{
        printf("Unequal\n");
    }
     
    return 0;
}

Question 4.)
#include<stdio.h>

union ID{
    char aadhaar[13];
    char passport[11];
};


int main () {
    union ID ids[3];
    int choice;
    int isdup = 0;

    for (int i = 0; i < 3; i++){
        printf("Enter '1' for Aadhar or '2' for passport: ");
        scanf("%d", &choice);

        if(choice == 1){
            printf("Enter Aadhaar number (12 digits): ");
            scanf("%s", ids[i].aadhaar);
        }
        else if (choice == 2){
            printf("Enter passport number (10 digits): ");
            scanf("%s", ids[i].passport);
        }
        else{
            printf("Invalid input! try again\n");
            i--;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(ids[i].aadhaar, ids[j].aadhaar) == 0) {
                isdup = 1;
                break;
            }
        }
        if (isdup) break;
    }

    if (isdup) {
        printf("Error: Duplicate ID numbers found.\n");
    } else {
        printf("All IDs are unique.\n");
    }
    return 0;
}

Question 5.)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    int n = 0;
    float sum = 0, mean, stddev = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float *nums = (float *)malloc(n * sizeof(float));

    if (nums == NULL) {
        printf("Memory allocation failed.\n");
       
    }

    printf("Enter the numbers: \n");
    for (int i = 0; i < n; i++){
        scanf("%f", &nums[i]);
        sum = sum + nums[i];
    }

    mean = sum / n;

    for (int i = 0; i < n; i++)
    {
        stddev = stddev + pow(nums[i] - mean, 2);
    }
    stddev = sqrt(stddev / n);
    

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
    printf("Standard Deviation = %.2f\n", stddev);

    free(nums);
    
    return 0;
}

Question 6.)
a)#include<stdio.h>
#include<stdlib.h>

int main () {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if(sourceFile == NULL){
        printf("Error opening source file\n");
        return 0;
    }

    destFile = fopen("destination.txt", "w");
    if(destFile == NULL){
        printf("Error opening destination file\n");
        fclose(sourceFile);
        return 0;
    }

    while((ch == fgetc(sourceFile)) != EOF){
        fputc(ch, destFile);
    }
    printf("File copied successfully.\n");
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}

b)#include<stdio.h>
#include<stdlib.h>

int main () {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if(sourceFile == NULL){
        printf("Error opening source file\n");
        return 0;
    }

    destFile = fopen("lowercase.txt", "w");
    if(destFile == NULL){
        printf("Error opening lowercase file\n");
        fclose(sourceFile);
        return 0;
    }

    while((ch == fgetc(sourceFile)) != EOF){
        if(ch >= 97 && ch <= 122){
            fputc(ch, destFile);
        }
    }
    printf("lowercase characters copied successfully.\n");
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}

c)#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main () {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if(sourceFile == NULL){
        printf("Error opening source file\n");
        return 0;
    }

    destFile = fopen("destination.txt", "w");
    if(destFile == NULL){
        printf("Error opening destination file\n");
        fclose(sourceFile);
        return 0;
    }

    while((ch == fgetc(sourceFile)) != EOF){
        if(isdigit(ch)){
        fputc(ch, destFile);
        }
    }
    printf("numeric characters copied successfully.\n");
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}

d)#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main () {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if(sourceFile == NULL){
        printf("Error opening source file\n");
        return 0;
    }

    destFile = fopen("destination.txt", "w");
    if(destFile == NULL){
        printf("Error opening destination file\n");
        fclose(sourceFile);
        return 0;
    }

    while((ch == fgetc(sourceFile)) != EOF){
        if(islower(ch)){
        fputc(toupper(ch), destFile);
        }
        else if(isupper(ch)){
            fputc(tolower(ch), destFile);
        }
        else{
            fputc(ch, destFile);
        }
    }
    return 0;
}

Question 7.)
#include<stdio.h>
#include<stdlib.h>

int main () {
    FILE *sourceFile, *destFile;
    char ch;

    sourceFile = fopen("source.txt", "r");
    if(sourceFile == NULL){
        printf("Error opening source file\n");
        return 0;
    }

    destFile = fopen("lowercase.txt", "w");
    if(destFile == NULL){
        printf("Error opening lowercase file\n");
        fclose(sourceFile);
        return 0;
    }

    while((ch == fgetc(sourceFile)) != EOF){
        fputc(ch, destFile);
    }
    printf("File Opened successfully.\n");
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}

Question 8.)
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
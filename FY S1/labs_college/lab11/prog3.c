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
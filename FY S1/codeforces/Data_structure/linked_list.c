#include<stdio.h>

struct sl_list{
    //struct sl_list *prev;
    char name[20];
    int age;
    struct sl_list *link;
};

int main () {
    struct sl_list s[3];

    // s[0].prev = NULL;
    
    for (int i = 0; i < 3; i++)
    {
        // if(i != 0){
        //     s[i].prev = &s[i-1];
        // }
        printf("Enter the name: ");
        scanf("%s", s[i].name);

        printf("Enter the age: ");
        scanf("%d", &s[i].age);
        if (i != 2)
        {
            s[i].link = &s[i+1];
        }
        else
        {
            s[i].link = &s[0];
        }   
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Adress of next: %d\n", s[i].link);
    }
    
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *create_list(){
    int k, n;
    struct node *p, *head;

    printf("How many elements to enter? ");
    scanf("%d", &n);

    for (int k = 0; k < n; k++)
    {
        if(k == 0){
            head = (struct node*)malloc(sizeof(struct node));
            p = head;
        }
        else{
            p->next = (struct node*)malloc(sizeof(struct node));
            p = p->next;
        }
        printf("Enter Data: ");
        scanf("%d", &p->data);
    }
    p->next = NULL;
    return(head);
}

int main () {
    
    return 0;
}
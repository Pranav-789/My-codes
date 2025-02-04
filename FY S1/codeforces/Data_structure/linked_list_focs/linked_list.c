#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void ll_traversal(struct node *ptr){
    while(ptr != NULL){
    printf("%d\n", ptr->data);
    ptr = ptr->next;
    }
}//traversal time complexity = O(n)

struct node* create_list(){
    int k, n;
    printf("The number of elements to be entered: ");
    scanf("%d", &n);
    struct node *head, *p;
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

void display(struct node *head){
    struct node *p;
    for(p = head; p != NULL; p = p->next){
        printf("Linked list data: %d\n", p->data);
    }
}

int main () {
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 16;
    third->next = NULL;

    display(head);

    return 0;
}
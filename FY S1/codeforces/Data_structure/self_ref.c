#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main () {
    struct node head; // = malloc(sizeof(struct node));
    struct node first; //= malloc(sizeof(struct node));
    struct node second;// = malloc(sizeof(struct node));

    head.data = 1;
    head.next = &first;
    
    first.data = 2;
    first.next = &second;

    second.data = 3;
    second.next = NULL;

    struct node *current = &head;

    while(current != NULL){
        printf("%d -> ", (*current).data);
        current = current->next;
    }

    printf("NULL\n");
    printf("%u\n", first.next);
    printf("data of first: %d\n", head.next->next);
    return 0;
}
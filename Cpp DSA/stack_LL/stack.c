#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int isFULL(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p == NULL){
       return 1; 
    }
    free(p);
    return 0;
}

int isEmpty(struct Node* top){
    return (top == NULL);
}

struct Node* push(struct Node* top, int x){
    if(isFULL(top)){
        printf("STack Overflow!\n");
        return top;
    }
    else{
        struct Node *n = (struct Node*)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

void print(struct Node* ptr){
    while(ptr!= NULL){
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int pop(struct Node** top){
    if(isEmpty(*top)){
        printf("The stack is already empty\n");
    }
    else{
        struct Node* n = *top;
        *top = (*top)->next;
        int x = n ->data;
        free(n);
        return x;
    }
}

void peek(struct Node* top, int pos){
    struct Node* ptr = top;

    for(int i = 0; (i < pos -1 && ptr != NULL); i++){
        ptr = ptr -> next;
    }
    if(ptr!=NULL){
    printf("Element at position %d : %d\n", pos, ptr->data);
    }
    else{
        return;
    }
}

void Stack_top(struct Node* top){
    printf("The top element is: %d", top->data);
}

void printStackBottom(struct Node* top) {
    if (top == NULL) {
        printf("The stack is empty.\n");
        return;
    }

    struct Node* current = top;
    
    // Traverse to the bottom of the stack
    while (current->next != NULL) {
        current = current->next;
    }
    
    // Print the bottom element
    printf("The bottom element is %d\n", current->data);
}
int main (){
    struct Node* top = NULL;
   top = push(top, 78);
   top = push(top, 8);
   top= push(top, 7);
   top= push(top, 6);
   top= push(top, 5);
   top= push(top, 4);
   top= push(top, 3);
   print(top);
   int element = pop(&top);
   printf("Popped element is: %d\n", element);
   print(top);
   peek(top, 5);
   Stack_top(top);
   printStackBottom(top);
    return 0;
}
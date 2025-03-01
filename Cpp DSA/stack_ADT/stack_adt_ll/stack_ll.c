#include<stdio.h>

#include "staack_ll.h"

Stack* createStack(int capacity){
    Stack* S1 = (Stack*)malloc(sizeof(Stack));
    S1->top = NULL;
    S1->len = 0;
    S1->capacity = capacity;
}
bool isEmpty(Stack* stack){
    return (stack->len == 0);
}
bool isFull(Stack* stack){
    return (stack->len == stack->capacity);
}
void push(Stack* stack, int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
    stack->len++;
}
int pop(Stack* stack){
    if(isEmpty(stack)){
        printf("Stack is empty!, can't pop.");
    }
    else{
        Node* temp = stack->top;
        stack->top = stack->top->next;
        free(temp);
        stack->len--;
    }
}
int peek(Stack* stack);
void destroyStack(Stack* stack){
    Node* temp = stack->top;
    while(temp!=NULL){
        temp = stack->top;
        stack->top = stack->top->next;
        free(temp);
    }
}
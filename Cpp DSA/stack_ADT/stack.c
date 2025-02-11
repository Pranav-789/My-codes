#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "stack.h"

Stack* createStack(int capacity){
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->data = (int*)malloc(capacity*sizeof(int));
    return stack;
}

bool isEmpty(Stack* stack){
    return (stack->top == -1);
}

bool isFull(Stack* stack){
    return (stack->top == stack->capacity - 1);
}

void push(Stack* stack, int value){
    if(isFull(stack)){
        printf("Stack Overloaded!\n");
        return;
    }
    stack->data[++stack->top] = value;
    printf("Pushed the value %d in stack.\n", value);
}

int pop(Stack* stack){
    if(isEmpty(stack)){
        printf("Stack is already empty!\n");
        return -1;
    }
    return stack->data[stack->top--];
}

int peek(Stack* stack){
    if(isEmpty(stack)){
        printf("Stack is already empty!\n");
        return -1;
    }
    return stack->data[stack->top];
}

void destroyStack(Stack* stack){
    free(stack->data);
    free(stack);
    printf("Stack destruction successfull!\n");
}
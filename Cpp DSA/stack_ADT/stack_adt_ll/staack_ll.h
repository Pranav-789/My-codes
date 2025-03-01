#include<stdbool.h>
#ifndef STACK_H
#define STACK_H

typedef struct Node{
    int* data;
    struct Node* next;
}Node;

typedef struct{
    Node* top;
    int len;
    int capacity;
} Stack;

Stack* createStack(int capacity);
bool isEmpty(Stack* stack);
bool isFull(Stack* stack);
void push(Stack* stack, int value);
int pop(Stack* stack);
int peek(Stack* stack);
void destroyStack(Stack* stack);

#endif
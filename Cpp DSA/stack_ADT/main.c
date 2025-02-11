#include<stdio.h>
#include "stack.c"

int main(){
    int capacity = 10;
    Stack* stack = createStack(capacity);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("Top element of stack is %d\n", peek(stack));

    int n = pop(stack);
    int z = pop(stack);
    printf("poped: %d  %d\n", n, z);

    destroyStack(stack);
    return 0;
}
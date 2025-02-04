#include<stdio.h>
#include<stdlib.h>

struct stack{

    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr ->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size -1){
        return 1;
    }
    else
    return 0;
}

void push(struct stack *ptr, int n){
    if(isFull){
        printf("Stack Overflow! Cannot push\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = n;
    }
}

int main () {
    
    return 0;
}
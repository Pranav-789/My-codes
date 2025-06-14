#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
    int* arr;
    int front;
    int rear;
    int cap;
} Queue;

Queue* createQueue(int n){
    Queue* Q1 = (Queue*)malloc(sizeof(Queue));
    Q1->front = -1;
    Q1->rear = -1;
    Q1->cap = n;
    Q1->arr = (int*)malloc(n*sizeof(int));
    return Q1;
}

int isEmpty(Queue* Q1){
    return (Q1->front == -1);
}

int isFull(Queue* Q1){
    return (Q1->rear==Q1->cap-1);
}

void EnQueue(int val, Queue* Q1){
    if(isFull(Q1)){
        printf("Queue Is Full!\n");
        return;
    }

    if(Q1->front == -1){
        Q1->front = 0;
    }
    Q1->rear++;
    Q1->arr[Q1->rear] = val;
}

void DeQueue(Queue* Q1){
    if(isEmpty(Q1)){
        printf("Queue is Empty!\n");
        return;
    }
    Q1->front++;
    if(Q1->front > Q1->rear){
        Q1->front = -1;
        Q1->rear = -1;
    }
}

int main(){

    return 0;
}
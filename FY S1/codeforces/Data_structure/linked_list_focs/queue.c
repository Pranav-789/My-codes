#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

int queue[MAXSIZE], front = -1, rear = -1;
void enQueue(int Value){
    if(rear == MAXSIZE -1){
        printf("\nQueue is Full... Insertion is not possible!!!");
    }
    else{
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = Value;
        printf("\n Interstion success!!!");
    }
}

void display(){
    if(rear == -1){
        printf("\nQueue is Empty!!!");
    }
    else{
        printf("\nQueue elements are:\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d\t", queue[i]);
    }
    }
}

void deQueue(){
    if(rear == -1){
        printf("\nQueue is empty!!! Deletion is not possible!!!");
    }
    else{
        printf("Deleted: %d", queue[front]);
        front++;
        if (front>rear)
        {
            front = rear -1;
        }
    }
}



int main(){
    enQueue(5);
    display();
    return 0;
}
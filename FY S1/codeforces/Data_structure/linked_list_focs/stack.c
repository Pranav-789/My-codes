#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

int stack[MAXSIZE], top = -1;

void push(int value){
    if(top == MAXSIZE - 1){
        printf("The satck is already full!\n");
    }
    else{
        top++;
        stack[top] = value;
        printf("Insertion Successful!\n");
    }
}

void pop(){
    if(top == -1){
        printf("\nStack is empty, deletion not possible.\n");
    }
    else{
        printf("\nDeleted: %d", stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("\nSatck is Empty!!!\n");
    }
    printf("Stack elements are: \n");
    for (int i = top; i>= 0; i--)
    {
        printf("%d\n", stack[i]);
    } 
}

void peek(){
    if(top == -1){
        printf("\nStack is Empty!\n");
    }
    else{
        printf("\nStack top most element: %d", stack[top]);
    }
}

int main () {
    int choice, value;
    while (1)
    {
        printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("Enter the value to be inserted");
            scanf("%d", &value);
            push(value);
            break;
            case 2:
            pop();
            break;
            case3: 
            peek();
            break;
            case 4: display();
            break;
            case 5: exit(0);
            default:
            printf("Wrong Selection, try again!\n");
        }
    }
    
    return 0;
}
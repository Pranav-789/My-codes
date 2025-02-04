#include<stdio.h>

void push(int n, int arr[], int* top, int size){
    if ((*top) == size -1)
    {
        printf("Stack overflow\n");
    }
    else{
    (*top)++;
    arr[*top] = n;
    }
}

void pop(int arr[], int*top){
    if((*top) == -1){
        printf("Stack underflow\n");
    }
    else{
    (*top)--;
    }
}

void display(int arr[], int* top){
    for(int i = 0; i < (*top)+1; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[5];
    int top = -1;

    push(5, arr, &top, 5);
    push(6, arr, &top, 5);
    push(7, arr, &top, 5);
    push(8, arr, &top, 5);
    push(9, arr, &top, 5);

    display(arr, &top);

    pop(arr, &top);
    display(arr, &top);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

typedef struct stack{
	char *arr;
	int size;
	int top;
}Stack;

Stack* createStack(int n){
	Stack* s1 = (Stack*)malloc(sizeof(Stack));
	s1->arr = (char*)malloc(n*sizeof(char));
	s1->top = -1;
	s1->size = n;
	return s1;
}

bool isFull(Stack * s1){
	return (s1->top == s1->size - 1);
}

bool isEmpty(Stack *s1){
	return (s1->top == -1);
}

void push(char val, Stack *s1){
	if(isFull(s1)){
		printf("STack Overloaded!\n");
		return;
	}
	s1->top++;
	s1->arr[s1->top] = val;
}

char pop(Stack *s1){
	if(isEmpty(s1)){
		printf("STack is empty!\n");
		return -1;
	}
	char popped = s1->arr[s1->top];
	s1->top--;
	return popped;
}

void display(Stack* s){
	int y = s->top;
	while(y!=-1){
		printf("%c\t", s->arr[s->top]);
		y--;
	}
}

void Tower_Of_Hanoi(Stack* src, Stack* aux, Stack* dest, int n){
	if(n == 1){
		//printf("Move disc%d from %c to %c\n", n, src, dest);
		push(pop(src), dest);
		return;
	}
	
	Tower_Of_Hanoi(src, dest, aux, n-1);
	//printf("Mode disc%d from %c to %c\n", n, src, dest);
	push(pop(src), dest);
	Tower_Of_Hanoi(aux, src, dest, n-1);
	
}

int main(){
	Stack* Rod_A = createStack(3);
	Stack* Rod_B = createStack(3);
	Stack* Rod_C = createStack(3);
	push('l', Rod_A);
	push('m', Rod_A);
	push('s', Rod_A);
	Tower_Of_Hanoi(Rod_A, Rod_B, Rod_C, 3);
	display(Rod_A);
	printf("\n");
	display(Rod_B);
	printf("\n");
	display(Rod_C);
	
	return 0;
}

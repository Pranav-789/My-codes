#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 100

typedef struct stack{
	char *arr;
	int top;
}Stack;

Stack* createStack(){
	Stack* s1 = (Stack*)malloc(sizeof(Stack));
	s1->arr = (char*)malloc(MAXSIZE*sizeof(char));
	s1->top = -1;
	return s1;
}

bool isFull(Stack * s1){
	return (s1->top == MAXSIZE - 1);
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

bool isOperator(char ch){
	 if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
		return 1;	
		}
		return 0;
}

int precedence(char ch){
	if(ch == '+' || ch == '-'){
		return 2;
	}
	if(ch == '*' || ch == '/'){
		return 3;
	}
	return 0;
}

char* infix_to_postfix(char* infix){
	char* postfix = (char*)malloc((strlen(infix)+1)*sizeof(char));
	Stack* operator = createStack();
	int i = 0, j = 0;
	while(infix[i] != '\0'){
		if(!isOperator(infix[i])){
			postfix[j] = infix[i];
			i++;
			j++;
		}
		else{
			if(precedence(infix[i]) > precedence(operator->arr[operator->top])){
				push(infix[i], operator);
				i++;
			}
			else{
				postfix[j] = pop(operator);
				j++;
			}
		}
	}
	while(!isEmpty(operator)){
			postfix[j] = pop(operator);
			j++;
	}
	postfix[j] = '\0';
	return postfix;
}

int main(){
	char* infix = "x-y/z-k*d";
	printf("postfix is %s", infix_to_postfix(infix));
	return 0;
}

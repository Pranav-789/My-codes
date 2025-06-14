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

typedef struct intstack{
	int *arr;
	int top;
}intStack;

bool iisFull(intStack * s1){
	return (s1->top == MAXSIZE - 1);
}

bool iisEmpty(intStack *s1){
	return (s1->top == -1);
}

void intpush(int val, intStack *s1){
	if(iisFull(s1)){
		printf("STack Overloaded!\n");
		return;
	}
	s1->top++;
	s1->arr[s1->top] = val;
}

char intpop(intStack *s1){
	if(iisEmpty(s1)){
		printf("STack is empty!\n");
		return -1;
	}
	int popped = s1->arr[s1->top];
	s1->top--;
	return popped;
}

bool isDigit(char ch){
	if(ch >= '0' && ch <='9'){
		return true;
	}
	else{
		return false;
	}
}

int evaluate(char* postfix){
	intStack* sp = (intStack*)malloc(sizeof(intStack));
	sp->top = -1;
	sp->arr = (int*)malloc(MAXSIZE*sizeof(int));
	
	for(int i = 0; postfix[i] != '\0'; i++){
		if(isDigit(postfix[i])){
			intpush(postfix[i] - '0', sp);
		}
		else{
			int val1 = intpop(sp);
			int val2 = intpop(sp);
			
			char op = postfix[i];
			
			switch(op){
				case '+':
					intpush(val1 + val2, sp);
					break;
				case '-':
					intpush(val1 - val2, sp);
					break;
				case '*':
					intpush(val1 * val2, sp);
					break;
				case '/':
				if(val2 == 0){
					printf("Invalid operation");
					return -1;
				}
				intpush(val1 / val2, sp);
				break;
			}
		}
	}
	return intpop(sp);
}

int main(){
	char* infix = "2 + 4";
	printf("postfix is %s\n", infix_to_postfix(infix));
	int ans = evaluate(infix_to_postfix(infix));
	printf("%d", ans);
	return 0;
}






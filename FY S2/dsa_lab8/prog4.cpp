#include<iostream>
#include<string>
#include<cmath>
using namespace std;

#define Max 100
int stack[100];
int top = -1;

void push(int value)
{
  if(top == Max - 1) 
  {
    cout<<"STACK OVERFLOW! ";
    return ;
  }
  else{
    stack[++top] = value;
  }
}

int pop()
{
  if(top == -1)
  {
    cout<<"STACK UNDERFLOW!!";
    return INT16_MIN;
  }
  else{
    return stack[top--];
  }
}

int postfix(string s)
{
  int operand1, operand2, result;
  for(char c : s)
  {
    if(isdigit(c))
    {
      push(c - '0');
    }
    else{
      operand2 = pop();
      operand1 = pop();
      switch(c)
    {
      case '+':
        result = operand1 + operand2;
        break;
      case '-':
        result = operand1 - operand2;
        break;
      case '*':
        result = operand1 * operand2;
        break;
      case '/':
        result = operand1 / operand2;
        break;
      case '^':
        result = pow(operand1, operand2);
        break;
      default:
        cout<<"INVALID OPERATION!!"<<endl;
        break;
    }
    push(result);
      
    }
  }
  return pop();
  // now last element in the stack will be the result of all operations..

}

int main()
{
  string s = "23^3*3-84/11+/+";
  int m = postfix(s);
  cout<<"EVALUATED RESULT: "<< m << endl;
  return 0;
}
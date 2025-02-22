#include<iostream>
using namespace std;

class Stack{
    int top = -1;
    int size;
    int *arr;   

    public:
    
    Stack(int size){
        this->size = size;
        arr = new int[size];
    }

    ~Stack(){
        delete []arr;
    }

    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return (top == (size - 1));
    }
    
    void push(int d){
        if(isFull()){
            cout << "Stack Overloaded!, can't push" << endl;
        }
        else{
            top++;
            arr[top] = d;
        }
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is empty!, can't pop" << endl;
        }
        else{
            //arr[top] = NULL;
            top--;
        }
    }

    void peek(){
        if(isEmpty()){
            cout << "Stack is empty!" << endl;
        }
        else{
            cout << "The top element is" << arr[top] << endl;
        }
    }
};

int main(){
    Stack* s1 = new Stack(3);
    s1->pop();
    s1->push(9);
    s1->push(7);
    s1->push(5);
    s1->push(3);
    s1->peek();
    s1->pop();
    s1->peek();
    delete s1;
    return 0;
}
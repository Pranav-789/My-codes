#include<bits/stdc++.h>
using namespace std;

class Queue{
    int* arr;
    int size;
    int qfront;
    int rear;

public:
    Queue(){
        qfront = 0;
        rear = 0;
        size = 100001;
        arr = new int[size];
    }

    bool isEmpty(){
        if(qfront == rear){
            return true;
        }
        return false;
    }

    void enqueue(int data){
        if(rear == size){
            cout << "Queue is Full!" << endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue(){
        if(qfront == rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int qfront(){
        if(qfront == rear){
            return  -1;
        }
        else{
            return arr[qfront];
        }
    }
};

int main(){

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;

        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertnode(Node* &tail, int ele, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else{
        Node* temp = new Node(d);
        Node *curr = tail;

        while(curr->data != ele){
            curr = curr->next;
        }
        temp ->next = curr->next;
        curr ->next = temp;
    }
}

void print(Node* &tail){
    Node* temp = tail;
    if(tail == NULL){
        cout <<"list is empty!"<< endl;
        return;
    }
    do{
        cout << temp->data << " -> ";
        temp = temp -> next;
    }while(temp != tail);
    cout << endl;
}

void deletenode(Node* &tail, int val){
   if(tail == NULL){
    cout << "The list is empty!" << endl;
   }
   else{
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != val){
            prev = curr;
            curr = curr ->next;
        }
        prev->next = curr->next;

        if(curr == prev){
            tail = NULL;
        }

        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
   }
}

int main(){
    Node* tail = NULL;

    insertnode(tail, 5, 3);
    print(tail);

    // insertnode(tail, 3, 5);
    // print(tail);

    // insertnode(tail, 5, 7);
    // print(tail);

    deletenode(tail, 3);
    print(tail);
    return 0;
}
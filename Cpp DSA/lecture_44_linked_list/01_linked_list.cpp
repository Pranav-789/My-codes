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

void insert_at_head(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insert_at_tail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insert_at_pos(Node* &head, Node* &tail, int pos, int d){
    if(pos == 1){
        insert_at_head(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos - 1){
        temp = temp -> next;
        cnt++;
    }
    if(temp->next == NULL){
        insert_at_tail(tail, d);
        return;
    }
    Node* nis = new Node(d);
    nis->next = temp->next;
    temp->next = nis;
}

void deletenode(Node* &head, int pos){
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* temp = NULL;
        Node* curr = head;
        int cnt = 1;
        while(cnt < pos){
            temp = curr;
            curr = curr->next;
            cnt++;
        }
        
        temp->next = curr->next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    Node* head = new Node(10);
    Node* tail = head;
    cout << head->data << endl;
    cout << head->next << endl;

    insert_at_tail(tail, 15);

    insert_at_head(head, 5);
    insert_at_head(head, 0);
    
   
    insert_at_pos(head,tail, 5, 12);

    display(head);
    deletenode(head, 3);
    display(head);
    cout << tail->data << endl;
    cout << tail->next << endl;
    return 0;
}
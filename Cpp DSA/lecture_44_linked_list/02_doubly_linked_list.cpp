#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data= d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory freed for data " << value << endl;
    }
};

void print(Node* &head){
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int get_len(Node* &head){
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insert_at_head(Node* &head, Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insert_at_tail(Node* &head, Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insert_at_pos(Node* &head, Node* &tail, int pos, int d){
    if(pos == 1){
        insert_at_head(head, tail, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos - 1){
        temp = temp -> next;
        cnt++;
    }
    if(temp->next == NULL){
        insert_at_tail(head, tail, d);
        return;
    }
    Node* nis = new Node(d);
    nis->next = temp->next;
    temp->next->prev = nis;
    temp->next = nis;
    nis->prev = temp;
}

void deletenode(Node* &head, Node* &tail, int pos){
    if(pos == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else if(tail->next == NULL){
        Node* temp = tail;
        tail = tail->prev;
        tail->next->prev = NULL;
        tail->next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insert_at_head(head, tail, 10);
    
    print(head);
    int len = get_len(head);
    cout<< len << endl;

    insert_at_head(head, tail, 12);
    print(head);

    insert_at_tail(head, tail, 8);
    print(head);

    insert_at_pos(head, tail, 2, 5);
    print(head);

    deletenode(head, tail, 4);
    print(head);
    return 0;
}
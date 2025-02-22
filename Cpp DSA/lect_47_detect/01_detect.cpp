#include<bits/stdc++.h>
#include<map>
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

void reverse_ll(Node* &head){
    if(head == NULL || head->next == NULL){
        return;
    }
    Node* curr = head;
    Node* prev = NULL;
    // Node* fwd = NULL;
    
    while(curr != NULL){
        Node* fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    head = prev;
}

//https://www.naukri.com/code360/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan
//for further approaches

Node* findmid(Node* &head){

    if(head == NULL || head->next == NULL){
        return head;
    }
    if(head->next->next == NULL){
        return head->next;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        slow = slow->next;
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
    }
    return slow;
}

bool detectloop(Node* &head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool>visited;

    Node* temp = head;

    while(temp != NULL){
        if(visited[temp] == true){
            temp->next = NULL;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydcycdet(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast -> next;
        if(fast != NULL){

            fast = fast->next;
        }

        slow = slow -> next;

        if(fast == slow){
            slow = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast-> next;
            }
            cout << "Loop at " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

void removeloop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startofloop = floydcycdet(head);
    Node* temp = startofloop;

    while(temp->next != startofloop){
        temp = temp->next;
    }
    temp->next = NULL;
}

int main(){
    Node* head = new Node(10);
    Node* tail = head;
    cout << head->data << endl;
    cout << head->next << endl;

    insert_at_tail(tail, 15);

    insert_at_head(head, 5);
    insert_at_head(head, 0);
    insert_at_head(head, 3);
    
    insert_at_pos(head,tail, 5, 12);

    display(head);

    // reverse_ll(head);
    // display(head);
    Node* mid = findmid(head);
    cout << mid->data << endl;

    tail -> next = head -> next;

    bool t = floydcycdet(head);
    cout << "Loop: " <<t << endl;
    bool y = floydcycdet(head);

    return 0;
}
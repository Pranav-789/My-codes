#include <iostream>
#include<queue>
using namespace std;

//non linear, hierarchial data structure;

class node{
    public:
    
    int data;
    node* left;
    node* right;
    
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout << "Enter the data for node: "<<endl;
    int data;
    cin >> data;
    root = new node(data);
    
    if(data == -1) return NULL;
    
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        
        q.pop();
        
        if(temp == NULL){//seperator
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
        
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout << "Enter data for root: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp->data << endl;
        int ltData;
        cin >> ltData;

        if(ltData != -1){
            temp->left = new node(ltData);
            q.push(temp->left);
        }

        cout << "Enter right node for " << temp->data << endl;
        int rtData;
        cin >> rtData;

        if(rtData != -1){
            temp->right = new node(rtData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node* root = NULL;
    // root = buildTree(root);
    // levelOrderTraversal(root);

    // cout << endl;
    // cout << "Inodrder Traversal: " << endl;
    // inOrder(root);

    // cout << endl;
    // cout << "Preodrder Traversal: " << endl;
    // preOrder(root);

    // cout << endl;
    // cout << "Postodrder Traversal: " << endl;
    // postOrder(root);

    buildFromLevelOrder(root);
    return 0;
}
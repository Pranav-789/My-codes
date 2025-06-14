#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int val;
    struct node* left;
    struct node* right;
}Node;

Node* createNode(int d){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = d;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(int d, Node* root){
    if(root == NULL) return createNode(d);

    if(d < root->val){
        root->left = insert(d, root->left);
    }
    else if(d > root->val){
        root->right = insert(d, root->right);
    }
    else{
        return root;
    }
}

Node* getPred(Node* root){
    root = root->left;
    while(root->right != NULL){
        root = root->right;
    }
    return root;
}

Node* deleteNode(int d, Node* root){
    Node* iPre;
    if(root == NULL) return NULL;

    
    if(d < root->val){
        root->left = deleteNode(d, root->left);
    }
    else if(d > root->val){
        root->right = deleteNode(d, root->right);
    }
    else{
        if((root->left == NULL) && (root->right == NULL)){
            free(root);
            return NULL;
        }
        if (root->left != NULL) {
            Node* iPre = getPred(root);
            root->val = iPre->val;
            root->left = deleteNode(iPre->val, root->left);
        }
        else {
            Node* temp = root->right;
            free(root);
            return temp;
        }
    }
    return root;
}

void preorder(Node* root){
    if(root == NULL) return;

    printf("%d\t", root->val);
    preorder(root->left);
    preorder(root->right);
}

int main(){
    Node* root = createNode(10);
    root = insert(5, root);
    root = insert(15, root);
    root = insert(3, root);
    root = insert(18, root);
    root = insert(7, root);
    root = insert(13, root);

    preorder(root);
    deleteNode(5, root);
    printf("\n");
    preorder(root);
    return 0;
}
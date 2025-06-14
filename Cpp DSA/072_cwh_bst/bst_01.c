#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
} Node;

Node* createNode(int d){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = d;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* constructTree(){

    int d;
    printf("Enter data of node: ");
    scanf("%d", &d);
    Node* node2ins = createNode(d);

    if(d == -1) return NULL;

    printf("Left of %d: ", d);
    node2ins->left = constructTree();
    printf("Right of %d: ", d);
    node2ins->right = constructTree();    

    return node2ins;
}

int isBST(Node* root){
    static struct node* prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    printf("%d\t", root->data);
    inorder(root->right);
}

int main(){
    Node* root = constructTree();
    inorder(root);
    printf("\n");
    printf("%d", isBST(root));
}
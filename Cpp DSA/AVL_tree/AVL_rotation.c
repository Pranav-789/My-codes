#include<stdio.h>
#include<stdlib.h>

struct Node{
    int key;
    struct Node* left;
    struct Node* right;
    int height;
};

int max(int a, int b){
    return a>b?a:b;
}

int getHeight(struct Node* n){
    if(n == NULL) return 0;
    return n->height;
}

struct Node* createNode(int key){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->left = NULL;
    node->right = NULL;
    node->key = key;
    node->height = 1;
    return node;
}

int getBalanceFactor(struct Node* n){
    if(n == NULL) return 0;

    return getHeight(n->left) - getHeight(n->right);
}

struct Node* rightRotate(struct Node* y){
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->right), getHeight(y->left))+1;
    x->height = max(getHeight(x->right), getHeight(x->left))+1;

    return x;
}


struct Node* leftRotate(struct Node* x){
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(getHeight(y->right), getHeight(y->left))+1;
    x->height = max(getHeight(x->right), getHeight(x->left))+1;

    return y;
}

struct Node* insert(struct Node* node, int key){
    if(node == NULL){
        return (createNode(key));
    }

    if(key < node->key){
        node->left = insert(node->left, key);
    }
    else if(key > node->key){
        node->right = insert(node->right, key);
    }
    else{
        return node;
    }

    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalanceFactor(node);

    //LL
    if(bf > 1 && key < node->left->key){
        return rightRotate(node);
    }
    //RR
    if(bf < -1 && key > node->right->key){
        return leftRotate(node);
    }
    //LR
    if(bf > 1 && key > node->left->key){
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    //RL
    if(bf < -1 && key < node->right->key){
        node->right = leftRotate(node->right);
        return leftRotate(node);
    }
    return node;
}

void preorder(struct Node* root){
    if(root == NULL) return;
    printf("%d\t", root->key);
    preorder(root->left);
    preorder(root->right);
}

// void visualizeTree(struct Node* root, int space) {
//     if (root == NULL) return;

//     // Increase distance between levels
//     space += 10;

//     // Process right child first
//     visualizeTree(root->right, space);

//     // Print current node after space count
//     printf("\n");
//     for (int i = 10; i < space; i++) printf(" ");
//     printf("%d\n", root->key);

//     // Process left child
//     visualizeTree(root->left, space);
// }

int main(){
    struct Node* root = NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    preorder(root);

    // printf("\n\nTree Visualization:\n");
    // visualizeTree(root, 0);
    return 0;
}
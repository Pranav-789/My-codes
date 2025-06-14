#include<stdio.h>
#include<stdlib.h>
#define max(a,b) ((a) > (b) ? (a) : (b))

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
    int height;
}Node;

int getHeight(Node* n){
    if(n == NULL) return 0;
    return n->height;
}

int getBalanceFactor(Node* n){
    if(n == NULL) return 0;
    return getHeight(n->left) - getHeight(n->right);
}


Node* createNode(int val){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}

Node* leftRotate(Node* x){
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(getHeight(y->right), getHeight(y->left))+1;
    x->height = max(getHeight(x->right), getHeight(x->left))+1;

    return y;
}

Node* rightRotate(Node* y){
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->right), getHeight(y->left))+1;
    x->height = max(getHeight(x->right), getHeight(x->left))+1;

    return x;
}

Node* insert(Node* root, int key){
    if(root==NULL) return createNode(key);

    if(key < root->data){
        root->left = insert(root->left, key);
    }
    else if(key > root->data){
        root->right = insert(root->right, key);
    }
    else{
        return root;
    }

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    int bf = getBalanceFactor(root);

    if(bf > 1 && key < root->left->data){
        return rightRotate(root);
    }
    if(bf < -1 && key > root->right->data){
        return leftRotate(root);
    }
    if(bf > 1 && key > root->left->data){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if(bf < -1 && key < root->right->data){
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

Node* getPreNode(Node* root){
    root = root->left;
    while(root->right!= NULL){
        root = root->right;
    }
    return root;
}

Node* deleteNode(Node*root, int d){
    if(root == NULL) return NULL;

    if(d < root->data){
        root->left = deleteNode(root->left, d);
    }
    else if(d > root->data){
        root->right = deleteNode(root->right, d);
    }
    else{
        if((root->left == NULL) && (root->right == NULL)){
            free(root);
            return NULL;
        }

        if(root->left != NULL){
            Node* iPre = getPreNode(root);
            root->data = iPre->data;
            root->left = deleteNode(root->left, iPre->data);
        }
        else{
            Node* temp = root->right;
            free(root);
            return temp;
        }
    }

    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    int bf = getBalanceFactor(root);

    if(bf > 1 && d < root->left->data){
        return rightRotate(root);
    }
    //RR
    if(bf < -1 && d > root->right->data){
        return leftRotate(root);
    }
    //LR
    if(bf > 1 && d > root->left->data){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    //RL
    if(bf < -1 && d < root->right->data){
        root->right = leftRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

void preorder(Node* root){
    if(root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = NULL;

    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 10);  // Left-Left case, triggers rightRotate
    root = insert(root, 25);  // Left-Right case
    root = insert(root, 40);
    root = insert(root, 50);  // Right-Right case
    root = insert(root, 35);  // Right-Left case

    printf("Preorder before deletion:\n");
    preorder(root);

    root = deleteNode(root, 20); // Test deletion

    printf("\nPreorder after deletion of 20:\n");
    preorder(root);

    return 0;
}

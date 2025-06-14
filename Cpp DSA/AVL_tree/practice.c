#include<stdio.h>
#include<stdlib.h>

struct Node{
    int key;
    struct Node* left;
    struct Node* right;
    int height;
};

int max(int a, int b){
    return (a>b)? a:b;
}

int getHeight(struct Node* n){
    if(n == NULL){
        return 0;
    }
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

    y->height = max(getHeight(y->left), getHeight(y->right))+1;
    x->height = max(getHeight(x->left), getHeight(x->right))+1;
    return x;
}

struct Node* leftRotate(struct Node* x){
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

struct Node* insert(struct Node* node, int key){
    if(node == NULL) return createNode(key);

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

    if(bf > 1 && key < node->left->key){
        return rightRotate(node);
    }

    if(bf < -1 && key > node->right->key){
        return leftRotate(node);
    }

    if(bf > 1 && key > node->left->key){
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if(bf < -1 && key < node->right->key){
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

struct Node* getMinValueNode(struct Node* node){
    struct Node* current = node;
    while(current->left!=NULL){
        current = current->left;
    }
    return current;
}


struct Node* deleteNode(struct Node* root, int key){
    if(root == NULL) return root;

    if(key < root->key){
        root->left = deleteNode(root->left, key);
    }
    else if(key > root->key){
        root->right = deleteNode(root->right, key);
    }
    else{
        if((root->left == NULL) || (root->right == NULL)){
            struct Node* temp = root->left? root->left : root->right;

            if(temp == NULL){
                temp = root;
                root = NULL;
            }
            else{
                *root = *temp;
            }
            free(temp);
        } else{
            struct Node* temp = getMinValueNode(root->right);
            root->key = temp->key;
            root->right = deleteNode(root->right, temp->key);
        }
    }

    if(root == NULL) return root;
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));

    // 3. Get balance factor
    int bf = getBalanceFactor(root);

    // 4. Balance the node
    // LL
    if (bf > 1 && getBalanceFactor(root->left) >= 0)
        return rightRotate(root);

    // LR
    if (bf > 1 && getBalanceFactor(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // RR
    if (bf < -1 && getBalanceFactor(root->right) <= 0)
        return leftRotate(root);

    // RL
    if (bf < -1 && getBalanceFactor(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void preorder(struct Node* root) {
    if (root == NULL) return;
    printf("%d\t", root->key);
    preorder(root->left);
    preorder(root->right);
}

int main () {
    struct Node* root = NULL;

    // Insert nodes
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);

    // Print preorder
    printf("Preorder Traversal:\n");
    preorder(root);

    deleteNode(root, 5);

    printf("Preorder Traversal:\n");
    preorder(root);
    return 0;
}
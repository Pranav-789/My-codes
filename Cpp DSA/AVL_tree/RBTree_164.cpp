#include <iostream>
using namespace std;

enum Color { RED, BLACK };

struct Node {
    int data;
    Color color;
    Node *left, *right, *parent;

    Node(int data) : data(data), color(RED), left(nullptr), right(nullptr), parent(nullptr) {}
};

class RedBlackTree {
private:
    Node* root;

    void rotateLeft(Node* &node) {
        Node* rightChild = node->right;
        node->right = rightChild->left;

        if (node->right != nullptr) node->right->parent = node;

        rightChild->parent = node->parent;

        if (node->parent == nullptr) root = rightChild;
        else if (node == node->parent->left) node->parent->left = rightChild;
        else node->parent->right = rightChild;

        rightChild->left = node;
        node->parent = rightChild;
    }

    void rotateRight(Node* &node) {
        Node* leftChild = node->left;
        node->left = leftChild->right;

        if (node->left != nullptr) node->left->parent = node;

        leftChild->parent = node->parent;

        if (node->parent == nullptr) root = leftChild;
        else if (node == node->parent->left) node->parent->left = leftChild;
        else node->parent->right = leftChild;

        leftChild->right = node;
        node->parent = leftChild;
    }

    void fixInsertion(Node* &node) {
        Node* parent = nullptr;
        Node* grandparent = nullptr;

        while (node != root && node->color == RED && node->parent->color == RED) {
            parent = node->parent;
            grandparent = parent->parent;

            // Case A: Parent is left child
            if (parent == grandparent->left) {
                Node* uncle = grandparent->right;

                // Case 1: Uncle is red (Recoloring)
                if (uncle != nullptr && uncle->color == RED) {
                    grandparent->color = RED;
                    parent->color = BLACK;
                    uncle->color = BLACK;
                    node = grandparent;
                } else {
                    // Case 2: Node is right child (Left rotation)
                    if (node == parent->right) {
                        rotateLeft(parent);
                        node = parent;
                        parent = node->parent;
                    }

                    // Case 3: Node is left child (Right rotation)
                    rotateRight(grandparent);
                    swap(parent->color, grandparent->color);
                    node = parent;
                }
            }
            // Case B: Parent is right child
            else {
                Node* uncle = grandparent->left;

                // Case 1: Uncle is red (Recoloring)
                if (uncle != nullptr && uncle->color == RED) {
                    grandparent->color = RED;
                    parent->color = BLACK;
                    uncle->color = BLACK;
                    node = grandparent;
                } else {
                    // Case 2: Node is left child (Right rotation)
                    if (node == parent->left) {
                        rotateRight(parent);
                        node = parent;
                        parent = node->parent;
                    }

                    // Case 3: Node is right child (Left rotation)
                    rotateLeft(grandparent);
                    swap(parent->color, grandparent->color);
                    node = parent;
                }
            }
        }

        root->color = BLACK;
    }

public:
    RedBlackTree() : root(nullptr) {}

    void insert(int data) {
        Node* node = new Node(data);
        if (root == nullptr) {
            root = node;
            root->color = BLACK;
        } else {
            Node* temp = root;
            Node* parent = nullptr;

            while (temp != nullptr) {
                parent = temp;
                if (node->data < temp->data) temp = temp->left;
                else temp = temp->right;
            }

            node->parent = parent;
            if (node->data < parent->data) parent->left = node;
            else parent->right = node;

            fixInsertion(node);
        }
    }

    void inorderTraversal(Node* node) {
        if (node == nullptr) return;

        inorderTraversal(node->left);
        if(node->color == 0){
            cout << "R";
        }
        else{
            cout << "B";
        }
        cout << node->data << " ";
        inorderTraversal(node->right);
    }

    void display() {
        inorderTraversal(root);
        cout << endl;
    }
};

int main() {
    RedBlackTree rbt;
    rbt.insert(10);
    rbt.insert(20);
    rbt.insert(30);
    rbt.insert(15);

    cout << "Inorder Traversal of Red-Black Tree: " << endl;
    rbt.display();

    return 0;
}
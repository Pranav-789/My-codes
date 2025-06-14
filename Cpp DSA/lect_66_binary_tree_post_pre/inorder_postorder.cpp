//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL)
        return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends

/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution {
    
    void createMapping(vector<int>& arr, map<int, int>& NodeToIndex, int n){
        for(int i = 0; i < n; i++){
            NodeToIndex[arr[i]] = i;
        }
    }
    
    Node* solve(vector<int> inorder, vector<int> postorder, int& index, int start, int end, int n, map<int, int>& NodeToIndex){
        if(index >= n || start > end){
            return NULL;
        }
        
        int element = postorder[index--];
        Node* root = new Node(element);
        int position = NodeToIndex[element];
        
        root->right = solve(inorder, postorder, index, position+1, end, n, NodeToIndex);
        root->left = solve(inorder, postorder, index, start, position-1, n, NodeToIndex);
        
        return root;
    }
    
  public:

    // Function to return a tree created from postorder and inoreder traversals.
    Node* buildTree(vector<int> inorder, vector<int> postorder) {
        // code here
        int n = postorder.size();
        map<int, int> NodeToIndex;
        createMapping(inorder, NodeToIndex, n);
        int index = n-1;
        return solve(inorder, postorder, index, 0, n-1, n, NodeToIndex);
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<int> inorder;
        int number;
        while (ss >> number) {
            inorder.push_back(number);
        }

        getline(cin, input);
        stringstream ss2(input);
        vector<int> postorder;
        while (ss2 >> number) {
            postorder.push_back(number);
        }
        Solution obj;
        Node* root = obj.buildTree(inorder, postorder);
        preOrder(root);
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

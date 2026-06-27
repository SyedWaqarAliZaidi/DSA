#include <iostream>
using namespace std;

class Node {
public:
    int data;        // The value stored in the node
    Node* left;      // Pointer to the Left Child
    Node* right;     // Pointer to the Right Child

    // Constructor to initialise a new node
    Node(int val) {
        data = val;
        left = NULL;  // Initially, children are set to NULL
        right = NULL;
    }
};

int main() {
    // Creating the root node
    Node* root = new Node(1);
    
    // Manually connecting children to form a hierarchy
    root->left = new Node(2);
    root->right = new Node(3);
    
    root->left->left = new Node(4);
    
    cout << "Root Data: " << root->data << endl;
    cout << "Root's Left Child: " << root->left->data << endl;
    
    return 0;
}

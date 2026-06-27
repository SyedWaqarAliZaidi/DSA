#include <iostream>
#include <vector>
#include<list>
using namespace std;


class Node {
public:
    int data;
    Node * left;
    Node * right;

    Node(int val){
        data = val;
        left = right = NULL;

    }
};
 class bTree {
    public:
    Node* root;
    bTree(){
        root = NULL;
    }




 int idx = -1;
Node* buildtree(vector <int> preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }
    root = new Node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right = buildtree(preorder);
    return root;
};

 void preOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
 }
int main() {
    vector <int> preorder = {1, 2, -2, -2, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildtree(preorder);
    cout << root->data << endl; // Output: 1
    cout << root->left->data << endl; // Output: 2
    cout << root->right->data << endl; // Output: 3
    cout << root->right->left->data << endl; // Output: 4
    cout << root->right->right->data << endl; // Output: 5


    preOrder(root);
    return 0;
}
 };
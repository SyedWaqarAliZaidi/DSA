#include <iostream>
using namespace std;

// Simple singly-linked list example
struct Node {
    int data;
    Node* next;
    Node(int v) : data(v), next(nullptr) {}
};

// Insert at the front
void push_front(Node*& head, int value) {
    Node* n = new Node(value);
    n->next = head;
    head = n;
}

// Insert at the back
void push_back(Node*& head, int value) {
    Node* n = new Node(value);
    if (!head) { head = n; return; }
    Node* cur = head;
    while (cur->next) cur = cur->next;
    cur->next = n;
}

// Delete first occurrence of value
bool delete_value(Node*& head, int value) {
    if (!head) return false;
    if (head->data == value) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return true;
    }
    Node* cur = head;
    while (cur->next && cur->next->data != value) cur = cur->next;
    if (!cur->next) return false;
    Node* tmp = cur->next;
    cur->next = tmp->next;
    delete tmp;
    return true;
}

// Print list
void print_list(Node* head) {
    Node* cur = head;
    while (cur) {
        cout << cur->data;
        if (cur->next) cout << " -> ";
        cur = cur->next;
    }
    cout << '\n';
}

// Free all nodes
void free_list(Node*& head) {
    while (head) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
}

int main() {
    Node* head = nullptr;

    // Demo: build list
    push_back(head, 24);
    push_back(head, 67);
    push_back(head, 46);
    push_front(head, 10);
    push_back(head, 34);

    cout << "List after inserts: ";
    print_list(head);

    // Delete a value
    cout << "Deleting 46...\n";
    if (delete_value(head, 46))
        cout << "Deleted 46\n";
    else
        cout << "46 not found\n";

    cout << "List now: ";
    print_list(head);

    free_list(head);
    return 0;
}
#include<iostream>
using namespace std;

int main(){
      vedtor<int> arr = {24, 67, 46, 34, 30}; 
      arr.push_back(34);

      cout<< arr;



}
                                                                    

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyList {
public:
    Node* head;
    Node* tail;

    DoublyList() {
        head = nullptr;
        tail = nullptr;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        }
        else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if (head == nullptr) {
            cout << "list is empty" << endl;
            return;
        }
        else if (head == tail) {
            delete head;
            head = tail = nullptr;
        }
        else {
            Node* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }
    }

    void pop_back() {
        if (head == nullptr) {
            cout << "list is empty" << endl;
            return;
        }
        else if (head == tail) {
            delete head;
            head = tail = nullptr;
        }
        else {
            Node* temp = tail;
            tail = tail->prev;
            tail->next = nullptr;
            delete temp;
        }
    }
    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp=temp->next;

        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyList dll;
    dll.push_front(2);
    dll.push_front(1);
    dll.push_back(3);
    dll.push_back(4);
    dll.printList();
    cout << endl;
    return 0;
}

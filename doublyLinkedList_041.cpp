#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = null;
        prev = null;
    
    }
};

class DoublyList
{
    head = tail = null;

    push_front(int val){
        Node* newNode = new Node(val);
        if(head == null){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newnode;
        }
        }
   push_back(int val){
        Node* newNode = new Node(val);
        if(head == null){
            head = tail = newNode;
        }
        else{
            newNode->prev=tail;
            tail->next = newNode;
            tail = newNode;
        }
        }
        pop_front(){
            if(head = null){
                cout << "list is empty";
                return;
            }
            else if(head = tail){
                delete head;
                head = tail = null;
            }
            else{
                Node* temp = head;
                head = head->next;
                head->prev = null;
                delete temp;
            }
        }


        pop_back(){
        
            if(head = null){
                cout << "list is empty";
                return;
            }
            else if(head = tail){
                delete head;
                head = tail = null;
            }
            else{
                Node* temp = tail;
                tail = tail->prev;
                tail->next = null;
                delete temp;
            }
        }
    }
int main()
{
    DoublyList dll;
    dll.pushfront(2);
    dll.pushfront(1);
    dll.pushback(3);
    dll.pushback(4);
    return 0;
}
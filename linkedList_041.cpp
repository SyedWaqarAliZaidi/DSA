#include <iostream>
#include<vector>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class linkList {
public:
    Node* head;
    Node* tail;
 
    linkList() {
        head = NULL;
        tail = NULL;
    }
};


void printLL () {
Node* temp = head;
while (temp != NULL){
    cout << temp << "->";
    temp = temp -> next;
}
cout << "NULL" << endl;

}

void pushFront(int value){
Node* newnode = new Node(value);
if (head == NULL){
head=tail=newnode;
return ;

}
newnode -> next = head;
head = newnode;
}

void pushBack(int value){
Node* newnode = new Node(value);

if (head == NULL){
    head = tail = newnode;
    return; 
}
tail -> next = newnode;
tail = newnode;
}

void popFront(){

    if (head == NULL) return ; 
    
    Node* temp = head;
    head = head -> next;
    delete temp;
}

void popBack(){
if (head = NULL) return;
Node* temp=head;
while (temp -> next != tail){
    temp = temp -> next;
}
delete tail;
tail = temp;
tail -> next = NULL;

}

void insert(int value , int position){
if (position < 0)
{
    cout << "Invalid Position\n";
    return;
}
if (position == 0)
{
    pushFront(value);
    return;
}
Node* temp = head;
for (int i=1; i < position - 1 && temp != NULL; i++)
{ 
    temp = temp -> next;
}
if (temp == NULL)
{
    cout << "position out of bound\n";
    return;
}
Node* newnode = new Node(value);
newnode -> next = temp -> next;
temp -> next = newnode;
}
void searching(int value)
{
    Node* temp = head;
    int pos = 0;
    while(temp != NULL)
    {
        if (temp -> data == value)
        {
            cout << " value found at position " << pos << endl;
            return;
        }
        temp = temp -> next;
        pos++;

    }
    cout << "value not found\n";

}
void deleteNode(int value)
{
    if (head == NULL)
    { 
        cout << "list is empty\n";
        return;
    }
    Node* temp = head;

    while(temp != NULL )
    {
        if (temp->data == value)
        {
            if (temp->data == head->data)
            {
                popFront();
                return;
            }
            else if(temp->data == tail->data)
            {
                popBack();
                return;

            }
            else
            {
                Node* prev = head;
                while (prev->next != temp)
                {
                    prev = prev -> next;
                }
                prev -> next = temp -> next;
                delete temp;
                return;
            }
        }

}
        temp = temp -> next;
    
    cout << "value not found\n";
}
};
int main()
{ 
linkList ll;
ll.pushBack(10);    
ll.pushBack(20);
ll.pushBack(30);
ll.pushFront(5);
ll.printLL();
ll.insert(15, 2);
ll.printLL();
ll.searching(20);
ll.deleteNode(20);
ll.printLL();
return 0;
}   
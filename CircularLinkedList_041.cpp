#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class circularList{
 Node* head;
 Node* tail;

public:
circularList()
{
    head = tail = NULL;


}

void insertAtHead(int value)
{
    Node *newNode = new Node(value);


    if (head == NULL)
    {
        head = tail = newNode;
        tail->next = head; 
        return;
    }
    else {
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
}
void display()
{
    if (head == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    Node *temp = head;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << temp->data <<"->";
    temp = temp->next;
}

void searchNode(int key)
{
    if (head == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    Node *temp = head;
    int pos = 1;

    do
    {
        if (temp->data == key)
        {
            cout << "Value found at position " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    } while (temp != head);

    cout << "Value not found\n";
}


void deleteNode(int key)
{
    if (head == NULL)
    {
        cout << "List is empty\n";
        return;
    }
    bool found = false;
    while (head != NULL && head->data == key)
    {

        if (head->next == head)
        {
            delete head;
            head = NULL;
            found = true;
            break;
        }

        Node *last = head;
        while (last->next != head)
            last = last->next;

        Node *del = head;
        head = head->next;
        last->next = head;
        delete del;
        found = true;
    }
    if (head != NULL)
    {
        Node *temp = head;
        while (temp->next != head)
        {
            if (temp->next->data == key)
            {
                Node *del = temp->next;
                temp->next = del->next;
                delete del;
                found = true;
            }
            else
            {
                temp = temp->next;
            }
        }
    }

    if (found)
        cout << "All occurrences deleted\n";
    else
        cout << "Value not found\n";
}

int main()
{
circularList Cll;

    int choice, value;

    do
    {
        cout << "\nwhat do you want \n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Delete\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            insertNode(value);
            break;

        case 2:
            cout << "Enter value to search: ";
            cin >> value;
            searchNode(value);
            break;

        case 3:
            cout << "Enter value to delete: ";
            cin >> value;
            deleteNode(value);
            break;

        case 4:
            display();
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}
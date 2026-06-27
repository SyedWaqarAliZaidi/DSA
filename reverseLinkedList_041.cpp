#include<iostream>
using namespace std;
class solution
{
    public:
    node* reverseList(node* head)
    {
        node* prev = NULL;
        node* curr = head;
        node* next = NULL;
        
        while(curr != NULL)
        {
            next = curr->next; // Store the next node
            curr->next = prev; // Reverse the current node's pointer
            prev = curr;       // Move prev to the current node
            curr = next;       // Move to the next node
        }
        
        return prev; // At the end, prev will be the new head of the reversed list
    }








}
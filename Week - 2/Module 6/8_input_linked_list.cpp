#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* &head, int v)
{
    Node* newNode = new Node(v);
    //error handle
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node* head)
{
    cout << endl << "Linked list: ";
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl << endl;
}
int main()
{
    Node* head = NULL;
    
    while(true)
    {
        int val;
        cin >> val;
        if(val == -1) break;

        insert_at_tail(head, val);
    }
    print_linked_list(head);
    return 0;
}
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
void insertAtTail(Node* &head, int val)
{
    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    return;
}
void insertAtHead(Node* &head, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    return;
}
void printlist(Node* tmp)
{
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}


int main()
{
    Node* head = NULL;

    while(true)
    {
        int val;
        cin >> val;

        if(val == -1)
        {
            break;
        }
        insertAtTail(head, val);
        //insertAtHead(head, val):
    }
    printlist(head);
    cout << endl;

    // int pos, val;
    // cin>> pos;
    // delete_from_position(head, pos);
    // printlist(head);

    return 0;
}
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
void print_result(Node* head)
{
    
    Node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << count;
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
    print_result(head);
    return 0;
}
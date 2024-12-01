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
int main()
{
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);
    Node* c = new Node(400);
    Node* d = new Node(500);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout << head->val << " ";
    // cout << head->next->val << " ";
    // cout << head->next->next->val << " ";
    // cout << head->next->next->next->val << " ";
    // cout << head->next->next->next->next->val << endl;
    
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        Node* prev;
        int val;
        Node* next;
    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};
void reverse(Node* head, Node* tail)
{
    Node* i = head;
    Node* j = tail;
    while(i!=j && i->next !=j)
    {
        swap(i->val, j->val);
        i= i->next;
        j= j->prev;
    }
    swap(i->val, j->val);
}
void print_doubly_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = d;
    
    //connection
    head->prev = NULL;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c; 
    c->prev = b;
    c->next = d;
    d->prev = c;
    d->next = NULL;

    reverse(head, tail);
    print_doubly_linked_list(head);
    
    return 0;
}
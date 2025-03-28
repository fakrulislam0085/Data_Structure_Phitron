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
int size(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
    //tail = newNode;
}
void insert_at_any_position(Node* head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i=1; i<pos; i++)
    {
        tmp = tmp->next;
    }
    //10 20 30 40
    newNode->next = tmp->next;  //100->30
    tmp->next = newNode;  //20->100
    newNode->next->prev = newNode; //100<-30
    newNode->prev = tmp; //20<-100
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
void reverse_print_doubly_linked_list(Node* tail)
{
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
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
    head->next = a;    
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c; 
    c->prev = b;
    c->next = d; 
    d->prev = c;

    int pos, val;
    cin >> pos >> val;

    if(pos > size(head))
    {
        cout << "Invalid" << endl;
    }
    else if(pos == 0)
    {
        insert_at_head(head, tail, val);
    }
    else if(pos == size(head))
    {
        insert_at_tail(head, tail, val);
    }
    else if(pos < size(head))
    {
        insert_at_any_position(head, pos, val);
    }
    print_doubly_linked_list(head);
    reverse_print_doubly_linked_list(tail);
    return 0;
}
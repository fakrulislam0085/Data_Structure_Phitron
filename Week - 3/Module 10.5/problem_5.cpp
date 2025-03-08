#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        Node* prev;
        int data;
        Node* next;
    Node(int x)
    {
        this->prev = NULL;
        this->data = x;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head, Node* &tail, int v)
{
    Node* newNode = new Node(v);
    if(head == NULL || tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        int v;
        cin >> v;
        
        if(v== -1) break;
        insert_at_tail(head,tail,v);
    }

    for(Node* i = head; i->next!=NULL; i= i->next)
    {
        for(Node* j = i->next; j!=NULL; j = j->next)
        {
            if(i->data > j->data)
            {
                swap(i->data, j->data);
            }
        }
    }
    print_list(head);
    return 0;
}
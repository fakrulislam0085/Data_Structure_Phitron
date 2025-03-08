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
void insert_head(Node* &head, Node* &tail, int v)
{
    Node* newnode = new Node(v);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
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
void insert_at_position(Node* head, int x, int v)
{
    Node* newNode = new Node(v);
    Node* temp = head;
    for(int i=1; i<x; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}
void print_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse_list(Node* tail)
{
    Node* runner = tail;
    while(runner != NULL)
    {
        cout << runner->data << " ";
        runner = runner->prev;
    }
    cout << endl;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    while(q--)
    {
        int x,v;
        cin >> x >> v;
        
        if(x==0) 
        {
            insert_head(head,tail,v);
            print_list(head);
            print_reverse_list(tail);
        }
        else if(x == size(head))
        {
            insert_at_tail(head, tail, v);
            print_list(head);
            print_reverse_list(tail);
        }
        else if(x != 0 && x < size(head))
        {
            insert_at_position(head, x, v);
            print_list(head);
            print_reverse_list(tail);
        }
        else if(x > size(head))
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}
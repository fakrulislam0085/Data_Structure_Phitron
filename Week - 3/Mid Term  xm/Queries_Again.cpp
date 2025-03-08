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
int size(Node* tmp)
{
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insertHead(Node* &head, Node* &tail, int v)
{
    Node* newNode = new Node(v);
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
void insertAtTail(Node* &head, Node* &tail, int val)
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
    tail = newNode;
}
void insertAtPosition(Node* head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i=0; i<pos-1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    tmp->next->next->prev = newNode;
    newNode->prev = tmp;
}
void printlist(Node* head)
{
    Node* tmp = head;
    cout << "L -> ";
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printreverse(Node* tail)
{
    Node* tmp = tail;
    cout << "R -> ";
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
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
        int x, v;
        cin >> x >> v;

        if(x == 0)
        {
            insertHead(head, tail, v);
            printlist(head);
            printreverse(tail);
        }
        else if(x == size(head))
        {
            insertAtTail(head, tail, v);
            printlist(head);
            printreverse(tail);
        }
        else if(x < size(head))
        {
            insertAtPosition(head, x, v);
            printlist(head);
            printreverse(tail);

        }
        else if( x > size(head))
        {
            cout << "Invalid" << endl;
        }

    }
    return 0;
}
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
void insert_at_tail(Node* &head, Node* &tail, int val) //O(1)
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
    //tail = tail->next; 
}
int size(Node* head) //O(n)
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
void delete_head(Node* &head, Node* &tail) //O(1)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;

    //error handle
    if(head == NULL)
    {
        tail == NULL;
        return;
    }
    head->prev = NULL;
}
void delete_tail(Node* &head, Node* &tail) //O(1)
{
    Node* deletenode = tail;
    tail = tail->prev;
    delete deletenode;

    //error handle
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}
void delete_a_position(Node* head, int pos) //O(n)
{
    Node* tmp = head;
    for(int i=1; i<pos; i++)
    {
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deletenode;
}
void print_doubly_linked_list(Node* head) //O(n)
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
    Node* head = NULL;
    Node* tail = NULL;
    
    while(true)
    {
        int v;
        cin >> v;
        if(v == -1)
        {
            break;
        }
        insert_at_tail(head, tail, v);
    }
    int pos;
    cin >> pos;

    if(pos > size(head))
    {
        cout << "Invalid" << endl;
    }
    else if(pos == 0)
    {
        delete_head(head, tail);
    }
    else if(pos == size(head))
    {
        delete_tail(head, tail);
    }
    else if(pos < size(head))
    {
        delete_a_position(head, pos);
    }

    print_doubly_linked_list(head);

    return 0;
}
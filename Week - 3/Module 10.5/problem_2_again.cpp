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
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
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
void print_list(Node* head)
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
    while(true)  //complexity = O(n)
    {
        int val;
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val); //complexity = O(1)
    }
    reverse(head, tail);
    print_list(head);
    return 0;
}
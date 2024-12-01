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
void insert_at_tail(Node* &head, Node* &tail, int v)  //O(1)
{
    Node* newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    return;
}
void delete_duplicate(Node* head, int x)
{  
    Node* tmp = head;
    while(tmp->next!= NULL)
    {
        if(tmp->next->val == x)
        {
            Node* delteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete delteNode;
        }
        tmp = tmp->next;
        x = tmp->val;
    }
    
}
void print_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }   
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }

    delete_duplicate(head, head->val);
    print_list(head);

    return 0;
}
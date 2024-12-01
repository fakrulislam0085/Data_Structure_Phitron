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
void insert_at_head(Node* &head, int v)
{
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    return;
}
void insert_at_tail(Node* &head, int v)
{
    Node* newNode = new Node(v);
    //error handle
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    return;
}
void delete_head(Node* &head)
{
    //error handle
    if(head == NULL)
    {
        return;
    }
    Node* deleteheadnode = head;
    head = deleteheadnode->next;
    delete deleteheadnode;
}
void delete_index(Node* head, int v)
{
    Node* tmp = head;
    
    for(int i=0; i<v-1; i++)
    {
        tmp = tmp->next;
        //error handle
        if(tmp == NULL)
        {
            return;
        }
    }
    //error handle
    if(tmp->next == NULL)
    {
        return;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node* head = NULL;

    int t;
    cin >> t;
    while(t--)
    {
        int x, v;
        cin >> x >> v;
        if(x==0)
        {
            insert_at_head(head, v);
        }
        else if(x==1)
        {
            insert_at_tail(head, v);
        }
        else if(x==2)
        { 
            if(v==0)
            {
                delete_head(head);
            }
            else
            {
                delete_index(head, v);
            }
           
        }
        print_linked_list(head);

    }
    return 0;
}
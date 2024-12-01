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
void insert_at_tail(Node* &head, int v)
{
    Node* newNode = new Node(v);
    //error handle
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}
void insert_at_indx(Node* &head, int indx, int value)
{
    Node* newnode = new Node(value);
    Node* tmp = head;
    if(indx == 0)
    {
        newnode->next = head;
        head = newnode;
        return;
    }

    for(int i=1; i<indx; i++)
    {
        tmp = tmp->next;
        //error handle
        if(tmp == NULL)
        {
           cout << "Invalid" << endl; 
        }
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    return;
}
void print_linked_list(Node* head)
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

    while(true)
    {
        int val;
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, val);
    }

    int q;
    cin >> q;
    while(q--)
    {
        int indx, value;
        cin >> indx >> value;
        insert_at_indx(head,indx,value);
         print_linked_list(head);
    }
   
    
    return 0;
}
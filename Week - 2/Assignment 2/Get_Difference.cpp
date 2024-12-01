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
int size(Node* head) //O(n)
{
    Node* tmp = head;
    int count = 0;
    while(tmp!=NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void print_difference(Node* head, int n) //O(n)
{
    if(head == NULL)
    {
        return;
    }
    Node* tmp = head;
    int min = tmp->val;
    for(int i=1; i<n; i++)
    {
        tmp = tmp->next;
    }
    int max = tmp->val;

    int difference = max - min;
    cout << difference << endl;
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
        insert_at_tail(head, tail, v);
    }
    for(Node* i = head; i->next != NULL; i= i->next)
    {
        for(Node* j = i->next; j!=NULL; j=j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    int n = size(head);
    print_difference(head, n);
    return 0;
}


//O(n) diye koro
//head a kichu na thakle kichu 
//delete hbe na error handle koro
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
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
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
int size(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    //cout << count << endl;
    return count;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(true)
    {
        int val;
        cin >> val;

        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int n = size(head);
   
    if(n%2 == 1)
    {
        Node* tmp = head;
        int middle = n/2;
        for(int i=1; i<=middle; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
    else if(n%2 == 0)
    {
        Node* tmp = head;
        int middle = (n+1)/2;
        for(int i=1; i<middle; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
    }
    return 0;
}
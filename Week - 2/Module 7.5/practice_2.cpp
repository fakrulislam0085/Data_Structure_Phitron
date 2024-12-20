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
void print_reverse(Node* head)
{
    Node* tmp = head;

    if(tmp == NULL) return;  //base case
    print_reverse(tmp->next);
    cout << tmp->val << " ";
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
    print_reverse(head);
    return 0;
}
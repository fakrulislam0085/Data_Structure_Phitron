#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
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
}
int countLinkedList(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void print_linked_list(Node* &head, int pos)
{
    for(int i=0; i<pos-1; i++)
    {
        head = head->next;
    }
    while(head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
void printLinkedList(Node* &head, int pos)
{
    for(int i=0; i<pos; i++)
    {
        head = head->next;
    }
    while(head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
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
    int cnt = countLinkedList(head);

    if(cnt %2 == 1)
    {
        int pos = (cnt+1) /2;
        print_linked_list(head, pos);
    }
    else
    {
        int pos = cnt /2;
        printLinkedList(head, pos);
    }
    return 0;
}

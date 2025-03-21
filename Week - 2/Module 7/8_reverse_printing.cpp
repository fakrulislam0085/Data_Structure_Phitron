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
void print_recursion(Node* head)
{
    Node* tmp = head;

    if(tmp == NULL) return;   //base case

    //normal print
    cout << tmp->val << " ";
    print_recursion(tmp->next);
}
void print_reverse_recursion(Node* head)
{
    Node* tmp = head;
   
    if(tmp == NULL) return;  //base case

    //reverse print
    print_reverse_recursion(tmp->next);
    cout << tmp->val << " ";
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_recursion(head);
    cout << endl;
    print_reverse_recursion(head);
    return 0;
}
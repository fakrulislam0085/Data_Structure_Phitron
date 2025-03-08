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
int size(Node* head)
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
void similarity_check(Node* head1, Node* head2)
{
    Node* tmp1 = head1;
    Node* tmp2 = head2;
    bool flag = false;
    while(tmp1 !=NULL && tmp2 != NULL)
    {
        if(tmp1->val != tmp2->val)
        {
            flag = true;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    if(flag == true)
        cout << "NO" << endl;
    else  
        cout << "YES" << endl;
}
int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    while(true)  //complexity = O(n)
    {
        int val;
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val); //complexity = O(1)
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(true)  //complexity = O(n)
    {
        int val;
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val); //complexity = O(1)
    }

    if(size(head1) != size(head2))
    {
        cout << "NO" << endl;
    }
    else if(size(head1) == size(head2))
    {
        similarity_check(head1, head2);
    }
    
    return 0;
}
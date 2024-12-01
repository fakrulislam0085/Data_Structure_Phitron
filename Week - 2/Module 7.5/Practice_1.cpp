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
int size1(Node* head)
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
void insert_at_tail_2(Node* &head2, Node* &tail2, int val2)
{
    Node* newNode = new Node(val2);
    if(head2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
        return;
    }
    tail2->next = newNode;
    tail2 = newNode;
    return;
}
int size2(Node* head2)
{
    Node* tmp = head2;
    int count2 = 0;
    while(tmp != NULL)
    {
        count2++;
        tmp = tmp->next;
    }
    //cout << count2;
    return count2;
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
    // print_result(head);
    size1(head);

    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(true)
    {
        int val2;
        cin >> val2;

        if(val2 == -1)
        {
            break;
        }
        insert_at_tail_2(head2, tail2, val2);
    }
    // print_result(head);
    size2(head2);


    if(size1(head) == size2(head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
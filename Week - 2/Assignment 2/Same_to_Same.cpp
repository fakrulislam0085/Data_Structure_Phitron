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
    //cout << count << endl;
    return count;
}
void insert_at_tail_2(Node* &head2, Node* &tail2, int v)  //O(1)
{
    Node* newNode = new Node(v);
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
int size2(Node* head2) //O(n)
{
    Node* tmp = head2;
    int count = 0;
    while(tmp!=NULL)
    {
        count++;
        tmp = tmp->next;
    }
    //cout << count;
    return count;
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

    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(true)
    {
        int v;
        cin >> v;

        if(v== -1) break;
        insert_at_tail_2(head2, tail2, v);
    }

    if(n != m)
    {
        cout << "NO" << endl;
    }
    else if( n==m)
    {
        int flag = true;
        for(int i=0; i<n; i++)
        {
            Node* tmp1 = head;
            Node* tmp2 = head2;
            if(tmp1->val != tmp2->val)
            {
                flag = false;
                break;
            }
            else if(tmp1->val == tmp2->val)
            {
                tmp1 = tmp1->next;
                tmp2 = tmp2->next;
            }
            
        }
        if(flag == false) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
   
    return 0;
}
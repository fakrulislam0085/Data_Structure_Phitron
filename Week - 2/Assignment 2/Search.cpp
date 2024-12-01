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
void search_index(Node* head, int x)
{
    Node* tmp = head;
    bool flag = false;
    while(tmp != NULL)
    {
        if(tmp->val == x)
        {
            flag = true;
            break;
        }
        tmp = tmp->next;
    }

    if(flag== true)
    {
        Node* tmp = head;
        int tmp_indx = 0;
        while(tmp!=NULL)
        {
            if(tmp->val == x)
            {
                cout << tmp_indx << endl;
                break;
            }
            tmp_indx++;
            tmp = tmp->next;
        }
    }
    else cout << "-1" << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
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
        int x;
        cin >> x;
        search_index(head, x);
    }
        
    return 0;
}
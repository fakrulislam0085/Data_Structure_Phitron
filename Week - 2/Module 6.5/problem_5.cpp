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
void insert_at_tail(Node* &head, int val)
{
    Node* newnode = new Node(val);
    //error handle
    if(head == NULL)
    {
        head = newnode;
        return;
    }

    Node* tmp = head;
    while(tmp->next!= NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
    return;
}
void check_order(Node* head)
{
    Node* tmp = head;
    bool flag = false;
    for(Node* i= tmp; i->next!=NULL; i= i->next)
    {
        for(Node* j= tmp->next; j!=NULL; j=j->next)
        {
            
            if(i->next != j->next)
            {
                if(i->val > j->val)
                {
                    flag = true;
                    break;
                }
                else
                {
                    continue;
                }
            //cout << i->val << " " << j->val << endl; 
            }           
        }
        tmp = tmp->next;
    }

    if(flag == true) cout << "NO";
    else cout << "YES";
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
        insert_at_tail(head,val);
    }
    check_order(head);
    return 0;
}
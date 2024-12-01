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
void insert_at_tail(Node* &head, int v)
{
    Node* newNode = new Node(v);
    //error handle
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}
void find_duplicate(Node* head)
{
    Node* tmp = head;
    bool flag = false;
    for(Node* i = tmp; i->next != NULL; i= i->next)
    {
        for(Node* j = tmp->next; j != NULL; j= j->next)
        {
            if(i->next != j->next)
            {
                if(i->val == j->val)
                {
                    flag = true;
                    break;
                }
            }
        }
        tmp = tmp->next;
    }
    if(flag == true) cout << "YES" << endl;
    else cout << "NO";

}
int main()
{
    Node* head = NULL;
    
    while(true)
    {
        int val;
        cin >> val;
        if(val == -1) break;

        insert_at_tail(head, val);
    }
    find_duplicate(head);
    return 0;
}
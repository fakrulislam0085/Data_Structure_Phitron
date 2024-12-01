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
void check_size(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    
    Node* temp = head;
    if(count%2 == 1) //odd
    {
        int middleindx = (count+1)/2;
        for(int i=1; i<middleindx; i++)
        {
            temp=temp->next;
        }
        cout << temp->val << endl;
        return;
    }

    Node* temp2 = head;
    if(count%2 == 0)
    {
        int middleindx2 = count/2;
        for(int i=1; i<middleindx2; i++)
        {
            temp2 = temp2->next;
        }
        cout << temp2->val << " " << temp2->next->val << endl;
        return;
    }

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
    check_size(head);
  
    return 0;
}
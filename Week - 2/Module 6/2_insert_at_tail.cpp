#include <bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* next;
    Node(int x)
    {
        this->val = x;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head, int v)
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    //tmp ekhn last node a obosthan korbe
    tmp->next = newNode;
}
void print_linked_list(Node* head)
{
    cout <<"Your linkded list: ";
   
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    while(true){
    cout << "option 1: insert at tail" << endl;
    cout << "option 2: print linked list" <<endl;
    cout << "option 3: Terminate" << endl;
    int op;
    cin >> op;
    if(op==1)
    {
        
        cout <<"Please enter value: ";
        int v;
        cin >> v;
        insert_at_tail(head,v);
    }
    else if(op==2)
    {
        print_linked_list(head);
    }
    else if(op==3)
    {
        break;
    }
    }

    // cout << "option 1: insert at tail" << endl;
    // int op;
    // cin >> op;
    // if(op==1)
    // {
        
    //     cout <<"Please enter value: " << endl;
    //     int v;
    //     cin >> v;
    //     insert_at_tail(head,v);
    // }
    // print_linked_list(head);
    return 0;
}

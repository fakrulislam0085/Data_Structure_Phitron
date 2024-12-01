#include <bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* next;

    Node(int value)
    {
        this->val = value;
        this->next = NULL;
    }
};
void insert_at_head(Node* &head, int v)
{
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << "inserted at head" << endl;
}
void insert_at_tail(Node* &head, int v)
{
    Node* newNode = new Node(v);
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
}
void insert_at_position(Node* head, int pos, int v)
{
    Node* newNode = new Node(v);
    Node* temp = head;
    for(int i=1; i<= pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "inserted at a position: " << pos << endl;

}
void print_linked_list(Node* head)
{
    Node* temp = head;
    while( temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl << endl;
}
void delete_from_pos(Node* head, int pos)
{
    Node* tmp = head;
    for(int i=1; i<pos; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl << "Deleted position" << pos << endl << endl;
}
void delete_head(Node* &head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl << "Deleted head" << endl << endl;
}
int main()
{
    Node* head = NULL;
    while(true)
    {
        cout <<"option 1: insert at head" << endl;
        cout <<"option 2: insert at tail" << endl;
        cout <<"option 3: insert at any position" << endl;
        cout <<"option 4: print my linked list" << endl;
        cout <<"option 5: delete from a position" << endl;
        cout <<"option 6: delete head" << endl;
        cout <<"option 7: Terminate the programm" << endl;

        int opt;
        cin >> opt;
        if(opt == 1)
        {
            cout << "Enter the Value: ";
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if(opt == 2)
        {
            cout << "Enter the value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if(opt == 3)
        {
            cout << "Enter the position ";
            int pos;
            cin >> pos;
            cout << "Enter the value: ";
            int v;
            cin >> v;

            if(pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
            
        }
        else if(opt == 4)
        {
            cout << endl;
            cout << "Here is the SLL: ";
            print_linked_list(head);
        }
        else if(opt == 5)
        {
            cout << "Enter position: ";
            int pos;
            cin >> pos;

            if(pos==0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_pos(head, pos);
            }
           
        }
        else if(opt == 6)
        {
            delete_head(head);
        }
        else if(opt == 7)
        {
            break;
        }
    }  
    return 0;
}
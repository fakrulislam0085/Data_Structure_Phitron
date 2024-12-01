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
    cout << "inserted at Tail" << endl << endl;
}
void insert_at_head(Node* &head, int v)
{
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << "inserted at Head" << endl << endl;

}
void insert_at_position(Node* head, int pos, int val)
{
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i=1; i<pos; i++)
    {
        temp = temp->next;
        //error handle
        if(temp == NULL)
        {
            cout << "Invalid position" << endl << endl;
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
    cout << "inserted at pos: " << pos << endl << endl;
}
void delete_head(Node* &head)
{
    //error handle
    if(head == NULL)
    {
        cout << endl << "head is not available" << endl << endl;
        return;
    }
    Node* deleteheadnode = head;
    head = deleteheadnode->next;
    delete deleteheadnode;
    cout << "Deleted head" << endl;
}
void delete_from_pos(Node* head, int pos)
{
    Node* tmp = head;
    for(int i=1; i<pos; i++)
    {
        tmp = tmp->next;
        //error handle
        if(tmp == NULL)
        {
            cout <<endl << "Invalid position" << endl << endl;
            return;
        }
    }
    //error handle
    if(tmp->next == NULL)
        {
            cout <<endl << "Invalid position" << endl << endl;
            return;
        }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void print_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl << endl;
}
int main()
{
    Node* head = NULL;

    while(true)
    {
        cout << "option 1: Insert at tail" << endl;  //done
        cout << "option 2: insert at head" << endl;  //no error
        cout << "option 3: insert at any position" << endl; //done
        cout << "option 4: delete from head" << endl;  //done
        cout << "option 5: delete from position" << endl; //done
        cout << "option 6: print linked list" << endl; //no error
        cout << "option 7: Terminate The DS" << endl;
        int opt;
        cin>> opt;

        if(opt==1)
        {
            cout << "Enter the value: ";
            int v;
            cin>> v;
            insert_at_tail(head, v);
        }
        else if(opt == 2)
        {
            cout << "Enter the Value: ";
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if(opt == 3)
        {
            cout << "Enter the position: ";
            int pos; 
            cin >> pos;
            cout << "Enter the value: ";
            int val;
            cin >> val;
            if(pos== 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }
        else if(opt == 4)
        {
            delete_head(head);
        }
        else if(opt == 5)
        {
            cout << "Enter the position: ";
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
            cout << endl;
            cout << "Linked list: ";
            print_linked_list(head);
        }
        else if(opt == 7)
        {
            break;
        }
   
    }
    return 0;
}
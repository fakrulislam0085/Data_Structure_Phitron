#include <bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* next;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert_at_tail(Node* &head, int value)
{
    Node* newNode = new Node(value);
    if(head == NULL){
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
    Node *tmp = head;
    for(int i=1; i< pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl << endl;
    cout << "Inserted at position " << pos << endl;
    cout << endl;
}
void print_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node* head = NULL;
    
    while(true){
        cout << "option 1: insert at tail: " << endl;
        cout << "option 2: insert at any position: " << endl;
        cout << "option 3: print my linked list: " << endl;
        cout << "option 4: Terminate the program" << endl;
        int opt;
        cin>> opt;
        if(opt == 1){
            cout << "Enter the value please: ";
            int value;
            cin>> value;
            insert_at_tail(head, value);
        }
        else if(opt == 2){
            cout << "Enter Position: ";
            int pos;
            cin >> pos;
            cout << "Enter the Value: ";
            int v;
            cin >> v;
            insert_at_position(head, pos, v);
        }
        else if(opt == 3){
            cout << "Here is my Linked list: ";
            print_linked_list(head);
        }
        else if(opt == 4){
            break;
        }
    }
    return 0;
}
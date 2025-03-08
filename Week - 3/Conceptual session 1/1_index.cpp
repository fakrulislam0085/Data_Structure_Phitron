#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node* prev;
        Node* next;
    Node(int data)
    {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};
//To calculate linkedlist size O(1)
int size = 0;

void insert_tail(Node* &head, int val)
{
    size++;

    Node* newNode = new Node(val);
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
    newNode->prev = temp;

}

//O(1)
void count_size(Node* head)
{
    cout << size << endl;
}

void print_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL; 

    while(1)
    {
        int val;
        cin >> val;

        if(val == -1) break;

        insert_tail(head, val);
    }
    print_list(head);
    count_size(head);
    return 0;
}
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
int main()
{
    //Node a(20);
    Node* head = new Node(100);  
    Node* a = new Node(200);
    Node* b = new Node(300);

    head->next = a;
    a->next = b;
    b->next = NULL;

    cout << head->val << " ";
    cout << head->next << endl;

    cout << head->next->val << " ";
    cout << head->next->next << endl;
    cout << a->val << " " << a->next << endl;

    cout << head->next->next->val << " ";
    cout << head->next->next->next << endl;
    cout << b->val << " " << b->next << endl;

    

    return 0;
}
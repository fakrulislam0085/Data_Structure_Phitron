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
int main()
{
    Node* p = new Node(10);
    Node* q = new Node(20);

    p->next = q;
    q->next = NULL;

    cout << p->val << " " << q->val << endl;
    return 0;
}
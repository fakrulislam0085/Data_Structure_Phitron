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
int main()
{
    Node a(10);
    Node b(12);

    a.next = &b;
    b.next = NULL;

    cout << endl << a.val << " " << b.val << endl;
    return 0;
}
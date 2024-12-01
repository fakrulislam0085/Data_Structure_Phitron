#include <bits/stdc++.h>
class Node 
{
    public:
        int val;
        Node* next;

};
using namespace std;
int main()
{
    // int* a = new int;
    // int* ar = new int[5];

    Node* x = new Node;
    Node* y = new Node;

    // (*x).val = 10;
    // (*y).val = 20;

    x->val = 10;
    y->val = 20;

    x->next = y;
    y->next = NULL;

    cout << x->val << " " << y->val << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class BinaryNode
{
    public:
        int val;
        BinaryNode* left;
        BinaryNode* right;
    BinaryNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int main()
{
    BinaryNode* root = new BinaryNode(10);
    BinaryNode* a = new BinaryNode(20);
    BinaryNode* b = new BinaryNode(30);
    BinaryNode* c = new BinaryNode(40);
    BinaryNode* d = new BinaryNode(50);
    BinaryNode* e = new BinaryNode(60);
    BinaryNode* f = new BinaryNode(70);
    BinaryNode* g = new BinaryNode(80);
    BinaryNode* h = new BinaryNode(90);
    BinaryNode* i = new BinaryNode(100);

    //connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;

    return 0;
}
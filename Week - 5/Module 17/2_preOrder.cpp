#include <bits/stdc++.h>
using namespace std;
class BinaryNode
{
    public:
        int val;
        BinaryNode* left;
        BinaryNode* right;
    BinaryNode(int v)
    {
        this->val = v;
        this->left = NULL;
        this->right = NULL;
    }
};
void PreOrder(BinaryNode* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }
    
    cout << root->val << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
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

    //call for print
    PreOrder(root);

    return 0;
}
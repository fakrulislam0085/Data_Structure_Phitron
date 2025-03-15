#include <bits/stdc++.h>
using namespace std;
class bNode
{
    public:
        int val;
        bNode* left;
        bNode* right;
    
    bNode(int v)
    {
        this->val = v;
        this->left = NULL;
        this->right = NULL;
    }
};
void inOrder(bNode* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}
int main()
{
    bNode* root = new bNode(111);
    bNode* a = new bNode(222);
    bNode* b = new bNode(333);
    bNode* c = new bNode(444);
    bNode* d = new bNode(555);
    bNode* e = new bNode(666);

    //connection
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    //CallForPrint
    inOrder(root);

    return 0;
}
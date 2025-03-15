#include <bits/stdc++.h>
using namespace std;
class BNode
{
    public:
        int val;
        BNode* left;
        BNode* right;
    BNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void level_Order_Print(BNode* root)
{
    if(root==NULL)
    {
        cout << "There is no Tree" << endl;
        return;
    }

    queue <BNode* > q;
    q.push(root);

    while(!q.empty())
    {
        //line theke ber kore ana
        BNode* f = q.front();
        q.pop();

        //print kora
        cout << f->val << " ";

        //children gulok line a dar korano
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);

        // if(f->right)
        //     q.push(f->right);
        // if(f->left)
        //     q.push(f->left);
      

    }
}
int main()
{
    BNode* root = new BNode(10);
    BNode* a = new BNode(20);
    BNode* b = new BNode(30);
    BNode* c = new BNode(40);
    BNode* d = new BNode(50);
    BNode* e = new BNode(60);
    BNode* f = new BNode(70);
    BNode* g = new BNode(80);
    BNode* h = new BNode(90);
    BNode* i = new BNode(100);

    //connection
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    h->right = i;

    //call
    level_Order_Print(root);
    
                         
    return 0;
}
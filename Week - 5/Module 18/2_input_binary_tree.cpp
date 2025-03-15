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
BNode* input_tree()
{
    int val;
    cin >> val;
    BNode* root;
    if(val == -1)
        root = NULL;
    else
        root = new BNode(val);

    queue<BNode* > q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        //parent node ber kore anbo
        BNode* parent = q.front();
        q.pop();

        //print korbo
        int l, r;
        cin >> l >> r;
        BNode* myleft;
        BNode* myright;
        if(l== -1)
            myleft = NULL;
        else    
            myleft = new BNode(l);
        if(r==-1)
            myright = nullptr;
        else
            myright = new BNode(r);

        parent->left = myleft;
        parent->right = myright;

        //children gulo k line a dar korano
        if(parent->left)
            q.push(parent->left);
        if(parent->right)
            q.push(parent->right);
    }
    return root;
    
}
void level_Order_Print(BNode* root)
{
    if(root==NULL)
    {
        cout << "There is no Tree" << endl; 
        return;
    }

    queue < BNode* > q;
    q.push(root);

    while(!q.empty())
    {
        //parent ber kore ana
        BNode* p = q.front();
        q.pop();

        //print kora
        cout << p->val << " ";

        //children node line a dar korano
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }

}
int main()
{
    BNode* root = input_tree();
    level_Order_Print(root);
               
    return 0;
}
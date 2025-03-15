#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int v)
    {
        this->val = v;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue < Node* > q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        //parent ber kore ana
        Node* p = q.front();
        q.pop();

        //jabotiyo kaj kora
        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if(l==-1) 
            myLeft = NULL;
        else    
            myLeft = new Node(l);
        if(r==-1)
            myRight = NULL;
        else    
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        //children gulo k dar korano
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node* root)
{
    if(root == NULL) return;
    queue <Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* pr = q.front();
        q.pop();

        cout << pr->val << " ";

        if(pr->left)    q.push(pr->left);
        if(pr->right)   q.push(pr->right);
    }
}
void insert(Node* &root, int x)
{
    if(root == NULL)
    {
        root = new Node(x);  //as we updated our root, so we used reference
        return;
    }

    if(x < root->val)
    {
        if(root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }

    if(x > root->val)
    {
        if(root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}
int main()
{
    Node* root = input_tree();

    int x;
    cin >> x;
    insert(root, x);
    insert(root, 25);
    insert(root, 8);
    level_order(root);

    return 0;
}
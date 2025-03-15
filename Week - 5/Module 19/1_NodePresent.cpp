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
bool search_node(Node* root, int x)
{
    if(root == NULL)
        return false;
    if(root->val == x)
        return true;

    
    bool leftsearch = search_node(root->left, x);
    bool rightsearch = search_node(root->right, x);

    return leftsearch || rightsearch;
}
int main()
{
    Node* root = input_tree();
    int x;
    cin >> x;

    if(search_node(root, x))
        cout << "True" << endl;
    else        
        cout << "False" << endl;
    // print_tree(root);

    return 0;
}
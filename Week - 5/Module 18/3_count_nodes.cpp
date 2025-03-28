#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
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
        //ber kore ana
        Node* p = q.front();
        q.pop();

        //print ar kaj
        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if(l == -1)
            myLeft = nullptr;
        else    
            myLeft = new Node(l);
        if(r == -1)
            myRight = nullptr;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        //children gulo k push kora
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
int count(Node* root)
{
    if(root == nullptr)
        return 0;

    int l = count(root->left);
    int r = count(root->right);
    return l+r+1;
}

int main()
{
    Node* root = input_tree();
    cout << count(root) << endl;
    return 0;
}

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

int nodeLevel(Node* root, int searchedValue)
{
    queue< pair<Node*,int>> q;
    //q.push(make_pair(root, 1));  //longcut
    q.push({root, 1});  //shortcut

    while(!q.empty())
    {
        pair<Node*,int> pr = q.front();
        Node* node =  pr.first;
        int level = pr.second;
        q.pop();

        if(node->val == searchedValue)
        {
            return level;
        }
        if(node->left)  q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});
        
    }
    return 0;
}
int main()
{
    int tC;
    cin >> tC;
    while(tC--)
    {
        Node* root = input_tree();
        int m;
        cin >> m;

        cout << nodeLevel(root, m) << endl;
    }

    return 0;
}
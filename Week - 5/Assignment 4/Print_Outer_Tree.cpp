#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
    TreeNode(int v)
    {
        this->val = v;
        this->left = NULL;
        this->right = NULL;
    }
};
TreeNode* input_tree()
{
    int val;
    cin >> val;
    TreeNode* root;
    if(val == -1)
        root = NULL;
    else
        root = new TreeNode(val);

    queue < TreeNode* > q;
    if(root)
        q.push(root);

    while(!q.empty())
    {
        //parent ber kore ana
        TreeNode* p = q.front();
        q.pop();

        //jabotiyo kaj kora
        int l, r;
        cin >> l >> r;
        TreeNode* myLeft;
        TreeNode* myRight;
        if(l==-1) 
            myLeft = NULL;
        else    
            myLeft = new TreeNode(l);
        if(r==-1)
            myRight = NULL;
        else    
            myRight = new TreeNode(r);

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
void printOuterLeftTree(TreeNode* root)
{
    if(root->left)
    {
        printOuterLeftTree(root->left);
        cout << root->left->val << " ";
    }
    else if(root->right)
    {
        printOuterLeftTree(root->right);
        cout << root->right->val << " ";
    }
}
void printOuterRightTree(TreeNode* root)
{
    if(root->right)
    {
        cout << root->right->val << " ";
        printOuterRightTree(root->right);
    }
    else if(root->left)
    {
        cout << root->left->val << " ";
        printOuterRightTree(root->left);
    }
}
int main()
{
    TreeNode* root = input_tree();
    if(root)
    {
        //root ar left thakle
        if(root->left)
        {
            printOuterLeftTree(root);
        }
        
        cout << root->val << " ";

        //root ar right a thakle
        if(root->right)
        {
            printOuterRightTree(root);
        }
        
    }
    return 0;
}
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
int s = 0;
int SumOfTree(TreeNode* root)
{
    if(root == NULL) return 0;

    queue <TreeNode* > q;
    if(root) q.push(root);
    int sum = 0;

    while(!q.empty())
    {
        TreeNode* pr = q.front();
        q.pop();

        sum = sum + pr->val;

        if(pr->left)
            q.push(pr->left);
        if(pr->right)
            q.push(pr->right);
    }

    return sum;
}
int SumOfLeaf(TreeNode* root)
{
    if(root == NULL) return 0;

    queue <TreeNode* > q;
    if(root) q.push(root);
    int sum = 0;

    while(!q.empty())
    {
        TreeNode* pr = q.front();
        q.pop();

        if(pr->left == NULL && pr->right == NULL)
        {
            sum = sum + pr->val;
        }
        
        if(pr->left)
            q.push(pr->left);
        if(pr->right)
            q.push(pr->right);
    }
    return sum;
}
int main()
{
    TreeNode* root = input_tree();
    int NetSum = SumOfTree(root);
    int LeafSum = SumOfLeaf(root);

    cout << NetSum-LeafSum << endl;

    return 0;
}
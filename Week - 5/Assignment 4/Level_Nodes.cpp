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
int maxHeight(TreeNode* root)
{
    if(root == NULL) return 0;

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    return max(l,r)+1;  
}
void PrintNodesBasedOnLevel(TreeNode* root, int x)
{
    if(root == NULL) return;

    queue< pair<TreeNode*,int> >q;
    if(root) q.push({root,0});

    while(!q.empty())
    {
        pair<TreeNode*,int> pr = q.front();
        TreeNode* node = pr.first;
        int level = pr.second;
        q.pop();

        if(level == x)
        {
            cout << node->val << " ";
        }

        if(node->left)  q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});
    }
}
int main()
{
    TreeNode* root = input_tree();
    int x;
    cin >> x;
    
    int h = maxHeight(root) - 1;
    
    if(x>h) cout << "Invalid" << endl;

    PrintNodesBasedOnLevel(root, x);

    return 0;
}
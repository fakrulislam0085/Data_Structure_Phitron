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

void printLeafNodeinDescendingOrder(TreeNode* root)
{
    if(root == NULL) return;
    
    vector <int> v;
    queue<TreeNode* > q;
    if(root) q.push(root);
    while(!q.empty())
    {
        TreeNode* pr = q.front();
        q.pop();

        if(pr->left == NULL && pr->right == NULL)
        {
            v.push_back(pr->val);
        }

        if(pr->left)    q.push(pr->left);
        if(pr->right)   q.push(pr->right);
    }

    //sort the vector in descending order
    sort(v.begin(), v.end(), greater<int>());
   
    for(int val: v)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    TreeNode* root = input_tree();
    printLeafNodeinDescendingOrder(root);

    return 0;

}

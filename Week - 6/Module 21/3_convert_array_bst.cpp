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
TreeNode* convertArrayToBST(int ar[], int n, int l, int r)
{
    //base case
    if(l > r) return NULL;

    int mid = (l+r)/2;
    TreeNode* root = new TreeNode(ar[mid]);
    TreeNode* leftRoot = convertArrayToBST(ar, n, l, mid-1);
    TreeNode* rightRoot = convertArrayToBST(ar, n, mid+1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
void level_order(TreeNode* root)
{
    if(root == NULL) return;
    queue <TreeNode*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        TreeNode* pr = q.front();
        q.pop();

        cout << pr->val << " ";

        if(pr->left)    q.push(pr->left);
        if(pr->right)   q.push(pr->right);
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++) cin >> ar[i];
    TreeNode* root = convertArrayToBST(ar, n, 0, n-1);  //array, size, first index, last index

    level_order(root);

    return 0;
}
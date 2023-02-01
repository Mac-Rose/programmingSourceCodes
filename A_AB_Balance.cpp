class Solution
{
public:
    TreeNode *curr;
    void inorder(TreeNode *root)
    {
        if (!root)
            return;
        inorder(root->left);
        root->left = NULL;
        curr->right = root;
        curr = root;
        inorder(root->right);
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        TreeNode *ans = new TreeNode(0);
        curr = ans;
        inorder(root);
        return ans->right;
    }
};

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    bool check_greater(TreeNode *root, TreeNode *parent)
    {
        if (!root)
            return true;
        if (root->val >= parent->val)
            return false;
        return check_greater(root->left, parent) && check_greater(root->right, parent);
    }
    bool check_smaller(TreeNode *root, TreeNode *parent)
    {
        if (!root)
            return true;
        if (root->val <= parent->val)
            return false;
        return check_smaller(root->left, parent) && check_smaller(root->right, parent);
    }

public:
    bool isValidBST(TreeNode *root)
    {
        if (!root)
            return true;
        bool l = true, r = true;
        if (root->left)
            l = check_greater(root->left, root);
        if (root->right)
            r = check_smaller(root->right, root);
        return l && r && isValidBST(root->left) && isValidBST(root->right);
    }
};
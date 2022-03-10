class Solution
{
public:
    bool isValidBST(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }
        bool z = true, w = true;
        if (root->left != NULL)
        {
            z = check(root->left, root->val, false);
        }
        if (root->right != NULL)
        {
            w = check(root->right, root->val, true);
        }
        bool x = isValidBST(root->left);
        bool y = isValidBST(root->right);
        return x && y && z && w;
    }
    /*Parentval is the value of root node with respect to which all values of left or right sub tree nodes are to be checked*/
    bool check(TreeNode *root, int Parentval, bool val)
    {
        if (root == NULL)
        {
            return true;
        }
        if (val)
        {
            if (root->val <= Parentval)
            {
                return false;
            }
        }
        else
        {
            if (root->val >= Parentval)
            {
                return false;
            }
        }
        /*to check whether all nodes of left-sub tree have smaller value or not*/
        bool q = check(root->left, Parentval, val);
        /*to check whether all nodes of right-sub tree have greater value or not*/
        bool w = check(root->right, Parentval, val);
        return q && w;
    }
};
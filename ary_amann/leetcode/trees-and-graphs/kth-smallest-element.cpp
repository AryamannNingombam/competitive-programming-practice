/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//@TODO - wtf is this question
class Solution
{
    vector<int> result;
    void helper(TreeNode *root, int k)
    {
        if (!root)
            return;
        helper(root->left, k);
        result.push_back(root->val);
        helper(root->right, k);
    }

public:
    int kthSmallest(TreeNode *root, int k)
    {
        helper(root, k);
        return result[k - 1];
    }
};
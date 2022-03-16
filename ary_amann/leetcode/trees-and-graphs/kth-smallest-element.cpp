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
    int counter = 0;
    int helper(TreeNode *root, int k, int counter = -1)
    {
        if (root == nullptr)
        {
            counter = 1;
            return counter;
        }
        if (counter == k)
            return root->val;
        int left = helper(root->left, k, counter);
        if (left == k)
            return root->val;
        int right = helper(root->right, k, left);
        if (right == k)
            return root->val;
    }

public:
    int kthSmallest(TreeNode *root, int k)
    {
        return helper(root, k);
    }
};
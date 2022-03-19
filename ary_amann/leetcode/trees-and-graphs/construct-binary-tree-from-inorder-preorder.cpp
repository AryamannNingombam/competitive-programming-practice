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
class Solution
{
    int index = 0;
    map<int, int> m;

public:
    TreeNode *helper(vector<int> preorder, int left, int right)
    {
        if (left > right)
            return nullptr;
        int root_val = preorder[index++];
        auto root = new TreeNode(root_val);
        root->left = helper(preorder, left, m[root_val] - 1);
        root->right = helper(preorder, m[root_val] + 1, right);
        return root;
    }
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        for (int i = 0; i < inorder.size(); i++)
        {
            m[inorder[i]] = i;
        }
        return helper(preorder, 0, preorder.size() - 1);
    }
};
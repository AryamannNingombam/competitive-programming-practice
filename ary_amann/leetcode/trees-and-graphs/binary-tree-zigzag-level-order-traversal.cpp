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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> result = {};
        if (root == nullptr)
            return result;
        queue<TreeNode *> q;
        q.push(root);
        bool left_to_right = true;
        while (!q.empty())
        {
            vector<int> level(q.size(), 0);
            const int size = q.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *current = q.front();
                q.pop();
                if (left_to_right)
                    level[i] = current->val;
                else
                    level[size - 1 - i] = current->val;
                if (current->left != nullptr)
                    q.push(current->left);
                if (current->right != nullptr)
                    q.push(current->right);
            }
            result.push_back(level);
            left_to_right = !left_to_right;
        }
        return result;
    }
};

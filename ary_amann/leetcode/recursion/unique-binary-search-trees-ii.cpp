

class Solution
{
public:
    vector<TreeNode *> construct(int lo, int hi)
    {
        vector<TreeNode *> result = {};
        if (lo > hi)
        {
            result.push_back(nullptr);
            return result;
        }
        for (int i = lo; i <= hi; i++)
        {
            vector<TreeNode *> left = construct(lo, i - 1);
            vector<TreeNode *> right = construct(i + 1, hi);
            for (int j = 0; j < left.size(); j++)
            {
                for (int k = 0; k < right.size(); k++)
                {
                    TreeNode *head = new TreeNode(i);
                    head->left = left[j];
                    head->right = right[k];
                    result.push_back(head);
                }
            }
        }
        return result;
    }

    vector<TreeNode *> generateTrees(int n)
    {
        return construct(1, n);
    }
};
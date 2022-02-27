#include <vector>

using namespace std;
class Solution
{
public:
    int reversePairs(vector<int> &nums)
    {
        int counter = 0;
        const int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] > 2 * nums[j])
                {
                    counter++;
                }
            }
        }

        return counter;
    }
};
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        if (nums.size() < 3)
            return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int first_pointer, second_pointer;
        const int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            first_pointer = i + 1;
            second_pointer = size - 1;
            while (first_pointer < second_pointer)
            {
                const int sum = nums[i] + nums[first_pointer] + nums[second_pointer];
                if (sum < 0)
                    first_pointer++;
                else if (sum > 0)
                    second_pointer--;
                else
                {
                    result.push_back({nums[i], nums[first_pointer], nums[second_pointer]});
                    second_pointer -= 1;
                    while (first_pointer < second_pointer && nums[second_pointer] == nums[second_pointer + 1])
                        second_pointer--;
                }
            }
        }
        return result;
    }
};

int main()
{
    int size;
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    vector<vector<int>> result = Solution().threeSum(nums);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < 3; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}

#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minValue = INT_MAX;
        int max_profit = 0;
        for (auto i : prices)
        {
            minValue = min(minValue, i);
            max_profit = max(max_profit, i - minValue);
        };
        return max_profit;
    }
};
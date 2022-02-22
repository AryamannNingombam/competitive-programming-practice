class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n = a.size();
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = i + 1 ; j < n ; j++)
        {
            if(a[i] + a[j] == target)
                return {i , j};
        }
    }
    return {};
    }
};
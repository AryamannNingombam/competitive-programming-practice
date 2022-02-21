class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int size=nums.size();
        vector<int> ans;
        unordered_map<int, int> m;
        
        for(auto i : nums)
            m[i]++;
        
        // for(int i = 0; i < size; i++)
        //     m[nums[i]]++;
        
        for(auto i : m)
        {
            if(i.second > size / 3)
            {
                ans.push_back(i.first);
            }
        }        
    
        return ans;
    }
};



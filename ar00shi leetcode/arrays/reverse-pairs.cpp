class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int ans=0;
        int size=nums.size();
        
        for(int i=0;i<size;i++){
           for(int j=i+1;j<size;j++){
                if((double)nums[i]/2 > nums[j])
                    ans++;
            } 
        }
        return ans;
        
    }
};
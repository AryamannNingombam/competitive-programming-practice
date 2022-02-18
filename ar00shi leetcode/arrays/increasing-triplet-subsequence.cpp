class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int size =nums.size();
        int count[size];
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
            if(nums[i]>nums[j]){
                count[i]++;
            }
            }
        }

        for(int i=0;i<size;i++){
            if(count[i]>=2){
                return true;
            }
        }

            return false;

    }
};

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int min_height=0;
        int max_amount=0;
        int amount=0;
        
        
        // for(int i=0;i<height.size();i++){
        //     for(int j=0;j<height.size();j++){
        //         min_height = min(height[i],height[j]);
        //         amount = abs(i-j)*min_height;
        //         max_amount=max(amount, max_amount);
        //     }
        // }
        //this giving TLE^^
        
        int i=0;
        int j=height.size()-1;
        
        while(i<j){
            min_height = min(height[i],height[j]);
            amount = abs(i-j)*min_height;
            max_amount=max(amount, max_amount);
            if(height[i] > height[j])
                j--;
            else
                i++;
            
        }

        //using two pointers and greeeedy lego
                
        return max_amount;
        
    }
};
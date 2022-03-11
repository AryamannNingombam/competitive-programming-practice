class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0){
            return 0; 
        }    
        int ans = 0; 
        for(int i  = 0; i<prices.size()-1; i++){
            if(prices[i] < prices[i+1]){
                ans += prices[i+1] - prices[i]; 
            }
        }
        return ans; 
    }
};

//jyada hi socha, for a relatively easy problem, 
//if you know its greedy ka sawal, becomes too obv
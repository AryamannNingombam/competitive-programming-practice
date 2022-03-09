class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        sort(coins.begin(), coins.end());
        int n = coins.size();
        int ans = 0;
    
        
        for(int i=n-1; i>=0; i--){
            while(coins[i]<=amount){
                amount=amount-coins[i];
                ans++;
            }
            if(amount == 0)
                break;
        }
      
        
        if (amount > 0) return -1;
        return ans;
        
    }
};

//yeh chala nai but very honest effort on my half gg lolllll
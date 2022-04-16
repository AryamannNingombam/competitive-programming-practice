class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1, INT_MAX);
        dp[0]=dp[1]=0;
        for(int i=2;i<=n;i++)
            dp[i]=min(dp[i-2]+cost[i-2], dp[i-1]+cost[i-1]);
        return dp[n];
        
        
    }
};

//bruh dont forget to account for the last step, thats why n+1 bc in dp array

//not my soln using recursion and i lowkey dont get it >>

class Solution {
public:
    vector<int> dp;
    int solve(vector<int>& cost,int n)
    {
        if(n<2) return cost[n];
        if(dp[n]!=-1) return dp[n];
        return dp[n]=cost[n]+min(solve(cost,n-1),solve(cost,n-2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        dp.resize(n,-1);
        return min(solve(cost,n-1),solve(cost,n-2));
    }
};
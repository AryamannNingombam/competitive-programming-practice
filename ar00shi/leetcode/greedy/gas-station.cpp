class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int sum1=accumulate(begin(gas),end(gas),0);
        int sum2=accumulate(begin(cost),end(cost),0);
        if(sum1<sum2)return -1;
        
        int maxin=0;
        int curr=0;
        int n=gas.size();
        
        for(int i=0;i<n;i++)
        {
            curr+=gas[i]-cost[i];
            if(curr<0)
            {
                maxin=i+1; //this changes the starting pos to the next val
                curr=0; //resets
            }
        }
        return maxin;
    }
};

//not my code and i dont get it
class Solution {



public:
int climbStairs(int n) {
int cache[n+1];
if(n == 0 or n == 1)
return 1;
cache[0] = 1, cache[1] = 1;
for(int i=2;i<=n;i++){
cache[i]=cache[i-1]+cache[i-2];
}
return cache[n];
}
};



//why is recursion giving tle in this
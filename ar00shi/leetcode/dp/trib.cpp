class Solution {
unordered_map<int, int>cache;
public:
int tribonacci(int n) {
if(n == 0 or n == 1)
return n;
if(n == 2)
return n-1;
if(cache.find(n) != cache.end()){
return cache[n];
}
cache[0] = 0, cache[1] = 1, cache[2] = 1;
cache[n] = tribonacci(n-1) + tribonacci(n-2) +tribonacci(n-3);
return cache[n];
}
};
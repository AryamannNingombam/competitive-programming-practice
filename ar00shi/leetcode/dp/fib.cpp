class Solution {
unordered_map<int, int>cache;
public:
int fib(int n) {
if(n == 0 or n == 1)
return n;
if(cache.find(n) != cache.end()){
return cache[n];
}
cache[0] = 0, cache[1] = 1;
cache[n] = fib(n-1) + fib(n-2);
return cache[n];
}
};
class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        
        int n = str.size();
        int ans = 0; 

        for (int i = 0; i < n; i++) {

            vector<bool> visited(256);  

            for (int j = i; j < n; j++) {

                if (visited[str[j]] == true)
                    break;

                else {
                    ans = max(ans, j - i + 1);
                    visited[str[j]] = true;
                }
            }

            visited[str[i]] = false;
        }
        return ans;
    }
};
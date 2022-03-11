class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        for(int i=0; i<s.size(); i++) 
        {
            if(s[i] == ' ') continue;
            int pos = i;
            while(i < s.size() && s[i] != ' ') i++;
            if(ans.size() > 0) ans = ' ' + ans;
            ans = s.substr(pos, i-pos) + ans;
            i--;
        }
        return ans;
    }
};

//i-- kyu kiya woh yaad rakhna bas woi bt dera

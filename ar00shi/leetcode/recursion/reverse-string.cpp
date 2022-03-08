class Solution {
public:

    void reverseString(vector<char>& s,int start = 0) 
		{
			int size = s.size();
			if(start>=size/2){return ;}
			swap(s[start], s[size-start-1]);
			reverseString(s,start+1);
		}
};
    
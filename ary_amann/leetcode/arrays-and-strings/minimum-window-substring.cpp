class Solution
{
public:
    string minWindow(string s, string t)
    {

        // for counting the freq of chars in pattern
        int FP[128] = {0};

        // for counting the freq of chars in big string and the current window
        int FS[128] = {0};
        int count = 0;
        int start = 0;
        int start_idx = -1;
        int min_so_far = INT_MAX;
        int window_size;

        // count freq of all chars in pattern
        for (int i = 0; i < t.length(); i++)
        {
            FP[t[i]]++;
        }

        // iterate the big string to find the pattern
        for (int k = 0; k < s.length(); k++)
        {
            char ch = s[k];

            // counting freq of chars in window so that we can use it later while contracting
            FS[ch]++;

            // if present char exists in pattern **and** freq of present char in present window lessthan freq of present char in pattern then increase count
            if (FP[ch] != 0 and FS[ch] <= FP[ch])
            {
                count += 1;
            }

            // if window containing the pattern is found start contracting the window
            if (count == t.length())
            {

                // if the start at char which is not present in pattern **or** if the freq of present char in window morethan freq of char in pattern contract windown
                while (FP[s[start]] == 0 or FS[s[start]] > FP[s[start]])
                {
                    FS[s[start]]--;
                    start++;
                }
                // calculate present window size
                window_size = k - start + 1;

                // update the minimum window size till now
                if (window_size < min_so_far)
                {
                    min_so_far = window_size;
                    start_idx = start;
                }
            }
        }
        return (start_idx == -1) ? "" : s.substr(start_idx, min_so_far);
    }
};
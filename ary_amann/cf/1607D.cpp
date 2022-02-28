#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int size;
        cin >> size;
        vector<int> arr(size);
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        string s;
        cin >> s;
        vector<int> left, right;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
                left.push_back(arr[i]);
            else
                right.push_back(arr[i]);
        }
        sort(left.begin(), left.end());
        sort(right.begin(), right.end(), greater<int>());
        bool yes = true;
        for (int i = 0; i < left.size(); i++)
        {
            if (left[i] < i + 1)
            {
                yes = false;
            }
        }
        for (int i = 0; i < right.size(); i++)
        {
            if (right[i] > size - i)
            {
                yes = false;
            }
        }
        cout << (yes ? "YES" : "NO") << endl;
    }
    return 0;
}
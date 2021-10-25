#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int tests;
    cin >> tests;
    int size, k;
    string s;
    while (tests--)
    {
        cin >> size >> k >> s;
        vector<pair<int,int>> v;
        int l=0,r=0;
        while (l<size && s[i]=='L')l++;
        r=l;
        while (r<size){
            while (r<size && s[i]=='W')r++;
            if (r>=size)break;
            l=r-1;
            while (r<size && s[i]<'L')r++;
            if (r>=size)break;
            v.push_back({r-l-1,l+1});
        }
        sort(v.begin(),v.end());
        
    }

    return 0;
}
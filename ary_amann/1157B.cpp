#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cin >> size;
    string s;
    cin >> s;
    char arr[10];
    for (int i = 1; i < 10; i++)
    {
        cin >> arr[i];
    }
    bool brea= false;
    for (int i=0;i<s.size();i++){
        if (s[i]<arr[s[i]-'0'])
        s[i] =arr[s[i]-'0'],brea=true;
        else if (brea && s[i]>arr[s[i]-'0'])break;
        
    }
    cout << s << '\n';

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int matches;
    cin >> matches;
    int arr[2] = {0, 0};
    string s1 = "", s2 = "", temp;
    for (int i = 0; i < matches; i++)
    {
        cin >> temp;
        if (s1 == "" || s1 == temp)
        {
            s1 = temp;
            arr[0]++;
        }
        else
        {
            s2 = temp;
            arr[1]++;
        }
    }

    cout << ((arr[0] > arr[1]) ? s1 : s2) << '\n';

    return 0;
}
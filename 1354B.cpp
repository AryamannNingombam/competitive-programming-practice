#include <iostream>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int tests;
    string s;
    cin >> tests;
    while (tests--)
    {
        int arr[4] = {0, 0, 0, 0};
        cin >> s;
        int first_pointer = 0;

        const int size = s.size();
        int min_result = size + 1;
        for (int second_pointer = 0; second_pointer < size; second_pointer++)
        {
            arr[s[second_pointer] - '0']++;


            while (arr[s[first_pointer] - '0'] > 1)
                arr[s[first_pointer] - '0']--, first_pointer++;
            
            if (arr[1] > 0 && arr[2] > 0 && arr[3] > 0)
                min_result = min(min_result,
                                 second_pointer - first_pointer + 1);
        }
        if (min_result == size + 1)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << min_result << '\n';
        }
    }

    return 0;
}
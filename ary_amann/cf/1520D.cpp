#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int tests, size;
    cin >> tests;
    while (tests--)
    {
        cin >> size;
        int arr[size];
        unordered_map<long long, long long> m;
        long long  result = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            result += m[arr[i] - i];
            m[arr[i] - i]++;
        }
        cout << result << '\n';
    }

    return 0;
}
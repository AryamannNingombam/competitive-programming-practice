#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> taps(k);
        for (int i = 0; i < k; i++)
            cin >> taps[i];
        int first_filled = 1, middle_filled = 1, last_filled = 1;
        first_filled = max(taps[0], first_filled);
        last_filled = max(n - taps[k - 1] + 1, last_filled);
        for (int i = 0; i < k - 1; i++)
        {
            int distance = taps[i + 1] - taps[i];
            int middle = distance / 2;
            middle_filled = max(middle_filled, middle + 1);
        }
        cout << max(first_filled, max(last_filled, middle_filled)) << '\n';
    }

    return 0;
}
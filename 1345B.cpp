#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

unsigned long long return_cards_required(int n)
{
    return ((n) * (3 * n + 1)) / 2;
}

int main()
{
    int tests, num;
    cin >> tests;
    vector<unsigned long long> sums(100001);
    for (int i = 0; i <= 100000; i++)
        sums[i] = return_cards_required(i);
    while (tests--)
    {
        cin >> num;

        int counter = 0;
        while (num > 1)
        {
            int value = upper_bound(sums.begin(), sums.end(), num) - sums.begin();
            counter++;
            num = num - sums[value - 1];
        }

        cout << counter << '\n';
    }

    return 0;
}
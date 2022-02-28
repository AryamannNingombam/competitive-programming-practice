#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
        cin >> prices[i];
    sort(prices.begin(), prices.end());
    int number_of_guests;
    cin >> number_of_guests;
    int index = 0;
    int profit = 0;
    while (number_of_guests--)
    {
        if (index < n)
        {
            profit += prices[index];
        }
        else
        {
            profit -= d;
        }
        index++;
    }
    cout << profit << '\n';
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int number_of_shops;
    cin >> number_of_shops;
    vector<int> prices(number_of_shops);
    for (int i = 0; i < number_of_shops; i++)
        cin >> prices[i];

    sort(prices.begin(), prices.end());

    int days, limit;
    cin >> days;
    for (int i = 0; i < days; i++)
    {
        cin >> limit;
        //he cant buy shit;
        if (limit < prices[0])
        {
            cout << 0 << '\n';
            continue;
        }
        //he can buy from wherever he wants;
        else if (limit >= prices[number_of_shops - 1])
        {
            cout << number_of_shops << '\n';
        }
        //somewhere in the middle;
        else
        {
            int first_pointer = 0, second_pointer = number_of_shops - 1;
            while (first_pointer < second_pointer)
            {
                const int midpoint = (first_pointer + second_pointer) / 2;
                if (prices[midpoint] <= limit &&
                    prices[midpoint + 1] > limit)
                {
                    cout << midpoint + 1 << '\n';
                    break;
                }
                else if (prices[midpoint] <= limit)
                {
                    first_pointer = midpoint;
                }
                else
                {
                    second_pointer = midpoint;
                }
            }
        }
    }

    return 0;
}
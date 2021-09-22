#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int odd_counter = 0, even_counter = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] & 1)
                odd_counter++;
            else
                even_counter++;
            sum += arr[i];
        }

        if (x == n)
        {
            cout << ((sum & 1) ? "Yes\n" : "No\n");
            continue;
        }

        if (odd_counter == 0)
        {
            cout << "No\n";
            continue;
        }
        bool flag = false;
        for (int i = 1; i <= odd_counter; i += 2)
        {
            if (i > x)
            {
                break;
            }
            if ((x - i) <= even_counter)
            {
                cout << "Yes\n";
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "No\n";
    }

    return 0;
}
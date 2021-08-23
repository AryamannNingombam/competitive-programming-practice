#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

bool get_result(vector<int> &elements, int size)
{
    bool found_odd = false, found_even = false;
    for (int i = 0; i < size; i++)
    {
        //odd
        if (elements[i] % 2)
        {
            if (found_even)
                return false;
            found_odd = true;
        }
        //even
        else
        {
            if (found_odd)
                return false;
            found_even = true;
        }
    }
    return true;
}

int main()
{
    int tests, size;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> size;
        vector<int> elements(size);

        for (int i = 0; i < size; i++)
        {
            cin >> elements[i];
        }

        cout << (get_result(elements, size) ? "YES\n" : "NO\n");
    }

    return 0;
}
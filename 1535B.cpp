#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <map>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

int get_result(vector<int> &elements, int size)
{
    vector<int> even, odd;
    for (auto i : elements)
    {
        (i % 2 ? odd.push_back(i) : even.push_back(i));
    }
    int index = 0;
    for (auto i : even)
    {
        elements[index++] = i;
    }
    for (auto i : odd)
    {
        elements[index++] = i;
    }
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (gcd(elements[i], 2 * elements[j]) > 1)
                counter++;
        }
    }
    return counter;
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
            cin >> elements[i];

        cout << get_result(elements, size) << '\n';
    }

    return 0;
}
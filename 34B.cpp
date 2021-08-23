#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

int get_result(vector<int> &elements, int size, int limit)
{
    sort(elements.begin(), elements.end());
    int index = 0;
    int result = 0;
    while (limit-- && elements[index] < 0)
        result += abs(elements[index++]);

    return result;
}

int main()
{
    int size, limit;

    cin >> size >> limit;
    vector<int> elements(size);

    for (int i = 0; i < size; i++)
    {
        cin >> elements[i];
    }

    cout << (get_result(elements, size, limit));

    return 0;
}
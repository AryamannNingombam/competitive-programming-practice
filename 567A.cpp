#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <map>
#include <cmath>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

vector<pair<int, int>> return_min_max(vector<int> &elements, int size)
{
    vector<pair<int, int>> result;
    //first element;
    result.push_back(pair<int, int>(elements[1] - elements[0], elements[size - 1] - elements[0]));
    for (int i = 1; i < size - 1; i++)
        result.push_back(pair<int, int>(min(elements[i] - elements[i - 1], elements[i + 1] - elements[i]), max(elements[i] - elements[0], elements[size - 1] - elements[i])));
    result.push_back(pair<int, int>(elements[size - 1] - elements[size - 2], elements[size - 1] - elements[0]));
    return result;
}

int main()
{
    int size;
    cin >> size;
    vector<int> elements(size);
    for (int i = 0; i < size; i++)
        cin >> elements[i];

    vector<pair<int, int>> result = return_min_max(elements, size);
    for (auto i : result)
    {
        cout << i.first << ' ' << i.second << '\n';
    }

    return 0;
}
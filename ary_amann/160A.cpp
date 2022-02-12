#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int get_min_coins(vector<int> &values, int target)
{
    std::sort(values.begin(), values.end());
    int counter = 0, iterator = values.size() - 1;
    int result = 0;
    while (counter <= target)
    {
        counter += values[iterator--];
        result++;
    }

    return result;
}

int main()
{
    int size, temp, sum = 0;
    cin >> size;
    vector<int> values(size);

    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        sum += temp;
        values[i] = temp;
    }
    cout << get_min_coins(values, sum / 2) << '\n';
    return 0;
}
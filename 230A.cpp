#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;
using int_pair = pair<int, int>;
using vector_int_pair = vector<int_pair>;

bool return_result(int s, int n, vector_int_pair &values)
{
    sort(values.begin(), values.end());
    for (auto &i : values)
    {
        if (s <= i.first)
            return false;
        s += i.second;
    }

    return true;
}

int main()
{
    int s, n, x, y;
    cin >> s >> n;
    vector_int_pair values;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        values.push_back({x, y});
    }
    cout << (return_result(s, n, values) ? "YES" : "NO") << '\n';

    return 0;
}
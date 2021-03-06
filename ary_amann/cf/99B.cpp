#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    if (v[0].first == v[n - 1].first)
        cout << "Exemplary pages.";
    else if ((v[0].first + v[n - 1].first) % 2 || n > 2 && (v[1].first != v[n - 2].first || v[1].first != (v[0].first + v[n - 1].first) / 2))
        cout << "Unrecoverable configuration.";
    else
        cout << (v[n - 1].first - v[0].first) / 2 << " ml. from cup #" << v[0].second + 1 << " to cup #" << v[n - 1].second + 1 << ".";
    return 0;
}

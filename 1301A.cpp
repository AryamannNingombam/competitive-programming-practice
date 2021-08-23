#include <iostream>
#include <string>

using namespace std;

bool get_results(string &a, string &b, string &c, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (!(c[i] == b[i] || c[i] == a[i]))
            return false;
    }

    return true;
}

int main()
{
    int tests;
    cin >> tests;
    string a, b, c;
    for (int i = 0; i < tests; i++)
    {
        cin >> a >> b >> c;
        cout << ((get_results(a, b, c, a.size())) ? "YES" : "NO") << '\n';
    }
    return 0;
}
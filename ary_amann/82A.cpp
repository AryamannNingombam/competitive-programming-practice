#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int multiplier = 1;
    while (multiplier * 5 < n)
    {
        n -= multiplier * 5;
        multiplier *= 2;
    }
    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << names[(n - 1) / multiplier] << '\n';

    return 0;
}
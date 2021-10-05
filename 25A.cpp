#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size, temp;
    cin >> size;

    vector<int> odds, evens;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        if (temp & 1)
            odds.push_back(i);
        else
            evens.push_back(i);
    }
    if (odds.size() == 1)
        cout << odds[0] + 1 << '\n';
    else
        cout << evens[0] + 1 << '\n';
    return 0;
}
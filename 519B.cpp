#include <iostream>
#include <map>

using namespace std;

int main()
{
    int size, temp;
    cin >> size;
    map<int, int> occurrences1, occurrences2;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        occurrences1[temp]++;
    }
    for (int i = 0; i < size - 1; i++)
    {
        cin >> temp;
        occurrences2[temp]++;
        occurrences1[temp]--;
    }
    for (int i = 0; i < size - 2; i++)
    {
        cin >> temp;
        occurrences2[temp]--;
    }
    map<int, int>::iterator iter;
    for (iter = occurrences1.begin(); iter != occurrences1.end(); iter++)
    {
        if (iter->second != 0)
            cout << iter->first << '\n';
    }

    for (iter = occurrences2.begin(); iter != occurrences2.end(); iter++)
    {
        if (iter->second != 0)
            cout << iter->first << '\n';
    }

    return 0;
}
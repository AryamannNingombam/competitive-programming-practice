#include <iostream>

using namespace std;

int main()
{
    int size, first, second;
    cin >> size;
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        cin >> first >> second;
        if (first != second)
        {
            flag = false;
            cout << "Happy Alex\n";
            break;
        }
    }
    if (flag)
    {
        cout << "Poor Alex\n";
    }

    return 0;
}
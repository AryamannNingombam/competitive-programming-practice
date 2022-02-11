#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

ostream &operator<<(ostream &os, const vector<int> &v)
{
    for (auto &i : v)
    {
        os << i << '\n';
    };
    return os;
}

int main()
{
    int size;
    cin >> size;
    vector<int> values(size);
    for (int i = 0; i < size; i++)
        cin >> values[i];

    bool ceil_ = true;
    for (auto &i : values)
    {
        if (i % 2 != 0)
        {
            if (ceil_)
            {
                i = ceil((float)i / 2);
            }
            else
            {
                i = floor((float)i / 2);
            }
            ceil_ = !ceil_;
        }
        else
        {
            i = i / 2;
        }
    }
    cout << values;

    return 0;
}
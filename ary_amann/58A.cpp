#include <iostream>
#include <string>
#include <vector>

using namespace std;

ostream &operator<<(ostream &os, const vector<int> &v)
{
    for (auto i : v)
        os << i << ' ';
    return os;
}

int main()
{
    string s;
    cin >> s;
    int h_index = -1, e_index = -1, l1_index = -1, l2_index = -1, o_index = -1;
    const int size = s.size();
    //finding h;
    for (int i = 0; i < size; i++)
    {
        if ((s[i] == 'h') && (h_index == -1))
        {
            h_index = i;
            break;
        };
    }
    //finding e;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'e' && e_index == -1 && i > h_index)
        {
            e_index = i;
            break;
        }
    }

    //finding l1;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'l' && l1_index == -1 && i > e_index)
        {
            l1_index = i;
            break;
        }
    }

    //finding l2;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'l' && l2_index == -1 && i > l1_index)
        {
            l2_index = i;
            break;
        }
    }

    //finding o;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'o' && o_index == -1 && i > l2_index)
        {
            o_index = i;
            break;
        }
    }

    string result = (h_index == -1 || e_index == -1 || l1_index == -1 || l2_index == -1 || o_index == -1) ? "NO\n" : "YES\n";

    cout << result;

    return 0;
}
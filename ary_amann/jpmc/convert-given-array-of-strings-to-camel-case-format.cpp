#include <iostream>
#include <string>
#include <vector>

using namespace std;

string convert_to_camel_case(vector<string> strings)
{
    const int size = strings.size();
    string result = "";
    for (auto &i : strings)
    {
        string temp = "";
        for (int it = 0; it < i.size(); it++)
        {
            if (it == 0)
            {
                temp += toupper(i[it]);
            }
            else
            {
                if (i[it - 1] == ' ')
                    temp += toupper(i[it]);
                else
                    temp += tolower(i[it]);
            }
        }
        result += temp;
    }
    return result;
}

int main()
{
    int size;
    cin >> size;
    vector<string> strings(size);
    for (int i = 0; i < size; i++)
    {
        cin >> strings[i];
    }
    cout << convert_to_camel_case(strings) << endl;

    return 0;
}
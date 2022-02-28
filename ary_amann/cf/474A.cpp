#include <iostream>
#include <string>
#include <map>

using namespace std;

const char keyboard[3][10] = {
    {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
    {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'},
    {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}};

map<char, pair<int, int>> config()
{
    map<char, pair<int, int>> m;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            m[keyboard[i][j]] = pair<int, int>(i, j);
        }
    };
    return m;
}

void get_decoded(char type, string &encoded)
{
    map<char, pair<int, int>> m = config();
    int mover = (type != 'R') ? 1 : -1;
    pair<int, int> temp;
    for (int i = 0; i < encoded.size(); i++)
    {
        temp = m[encoded[i]];
        encoded[i] = keyboard[temp.first][temp.second + mover];
    }
    cout << encoded << '\n';
}

int main()
{
    char type;
    string encoded;
    cin >> type >> encoded;
    get_decoded(type, encoded);
}
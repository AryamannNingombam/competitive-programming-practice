#include <iostream>
#include <unordered_map>
#include <string>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int tests;
    cin >> tests;
    while (tests--)
    {
        string arr[20];
        int size;
        cin >> size;
        unordered_map<string, int> m;

        int counter = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
            if (m[arr[i]] > 1)
                counter++;
        }
        for (int i = 0; i < size; i++)
        {
            if (m[arr[i]] == 1)
                continue;
            for (int j = 0; j < 10; j++)
            {
                char temp = '0' + j;
                string t = arr[i];
                t[3] = temp;
                if (m[t] == 0)
                {
                    m[t]++;
                    m[arr[i]]--;
                    arr[i] = t;
                    break;
                }
            }
        }
        cout << counter << '\n';
        for (int i = 0; i < size; i++)
            cout << arr[i] << '\n';
    }

    return 0;
}
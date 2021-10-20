#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int tests, size;
    cin >> tests;
    while (tests--)
    {
        cin >> size;
        vector<int> occ(size + 1, 0);
        int temp;
        for (int i = 0; i < size; i++)
            cin >> temp, occ[temp]++;
        sort(occ.begin(), occ.end(),greater<int>());
        int result = occ[0], last = occ[0], index = 1;
        while (index < size && last > 0)
        {
            if (occ[index] >= last)
            {
                result += (--last);
            }
            else
            {
                result += (occ[index]);
                last = occ[index];
            }

            index++;
        }
        cout << result << '\n';
        
    }

    return 0;
}
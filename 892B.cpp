#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    vector<bool> dead(size, 0);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    for (int i = size - 1; i > -1; i--)
    {
        int cutoff = max(0, i - arr[i]);
        while (cutoff < i)
        {
            if (!dead[cutoff])dead[cutoff++] = true;
            else break;
        }
    }
    int result = 0;
    for (int i = 0; i < size; i++)
        result += (!(dead[i]));
    cout << result << '\n';
    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> values(size, 0);
    unordered_map<long long, int> forward, backward;
    long long total_sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> values[i];
        total_sum += values[i];
        if (i != 0)
            backward[values[i]]++;
    }
    //if the number is odd;
    if (total_sum & 1)
    {
        cout << "NO\n";
        return 0;
    }
    long long temp_sum = 0;
    forward[values[0]]++;
    for (int i = 0; i < size; i++)
    {
        temp_sum += values[i];
        if (temp_sum == total_sum / 2)
        {
            cout << "YES\n";
            return 0;
        }
        //need to remove from first;
        else if (temp_sum > total_sum / 2)
        {
            const long long difference = temp_sum - (total_sum / 2);
            if (forward[difference] > 0)
            {
                cout << "YES\n";
                return 0;
            }
        }
        //need to remove from second;
        else
        {
            const long long difference = (total_sum / 2) - temp_sum;
            if (backward[difference] > 0)
            {
                cout << "YES\n";
                return 0;
            }
        }
        forward[values[i + 1]]++;
        backward[values[i + 1]]--;
    }
    cout << "NO\n";

    return 0;
}
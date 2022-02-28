#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int check_for_potential_team(int num, unordered_map<int, int> &m)
{
    int counter = 0;
    for (int i = 0; i < 6; i++)
    {

        counter += m[num - i];
    };
    int counter2 = 0;
    for (int i = 0; i < 6; i++)
    {

        counter2 += m[i - num];
    };
    return max(counter, counter2);
}

int main()
{
    int size;
    cin >> size;
    unordered_map<int, int> m;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i], m[arr[i]]++;
    int max_result = -1;
    for (int i = 0; i < size; i++)
    {
        int temp_max_result = check_for_potential_team(arr[i], m);
        max_result = max(max_result, temp_max_result);
    }
    cout << max_result << '\n';
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 0 1 2 3 n/2 || n/2 -1

int main()
{
    long long tests, size, benchmark;
    cin >> tests;
    while (tests--)
    {
        cin >> size >> benchmark;
        vector<long long> values(size);
        for (long long i = 0; i < size; i++)
            cin >> values[i];
        sort(values.begin(), values.end());
        long long pointer = size - 1;
        double average = values[pointer];
        float div = 1;
        double previous_sum = values[pointer];
        while (pointer > -1 && average >= benchmark)
        {
            pointer--;
            div++;
            previous_sum += values[pointer];
            average = (previous_sum) / div;
        }

        cout <<div-1 << '\n';
    }

    return 0;
}
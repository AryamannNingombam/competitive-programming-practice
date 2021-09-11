#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

long long insert_scores(long long current_pointer, unordered_map<long long, long long> &m,
                        vector<long long> &values, long long size,
                        long long current_score)
{
    if (m.find(current_pointer) != m.end())
    {
        return m[current_pointer];
    }
    if (current_pointer + values[current_pointer] >= size)
    {
        m[current_pointer] = values[current_pointer];
        return m[current_pointer];
    }
    else
    {
        m[current_pointer] = values[current_pointer] + insert_scores(current_pointer + values[current_pointer], m, values,
                                                                     size, m[current_pointer]);
        return m[current_pointer];
    }
}

int main()
{
    long long tests;
    cin >> tests;
    while (tests--)
    {
        long long size;
        cin >> size;
        vector<long long> values(size, 0);
        for (long long i = 0; i < size; i++)
            cin >> values[i];
        unordered_map<long long, long long> scores;
        long long main_pointer = 0;
        long long max_result = -1;
        long long current_result = 0;
        while (main_pointer < size)
        {

            long long result = insert_scores(main_pointer, scores, values, size, current_result);
            main_pointer++;
            max_result = max(result,
                             max_result);
            current_result = 0;
        }
        cout << max_result << '\n';
    }

    return 0;
}
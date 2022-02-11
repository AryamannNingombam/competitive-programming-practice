#include <iostream>
#include <cmath>

using namespace std;

long long  get_largest_smaller_squared_number(long long  target)
{
    long long  n = 1;
    while (target >= pow(n, 2))
        n++;

    return n - 1;
}

int   main()
{
    long long  cubes;
    cin >> cubes;
    long long  squared = get_largest_smaller_squared_number(cubes);
    long long  rows, cols;
    rows = cols = squared;

    long long  remainder = cubes % (long long )pow(squared, 2);

    long long  cols_to_add = remainder / cols;
    cols += cols_to_add;
    long long  remaining = remainder % cols;

    long long  total_perimeter = rows + 2 * cols;
    if (remaining != 0)
    {
        total_perimeter += 2 + rows;
    }else{
        total_perimeter += rows;
    }
    cout << total_perimeter << '\n';

    return 0;
}
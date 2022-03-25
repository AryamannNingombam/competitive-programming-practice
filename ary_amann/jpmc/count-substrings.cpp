int countSubstr(string S)
{
    int ones = 0;
    for (auto i : S)
        ones += i == '1';
    return (ones * (ones - 1)) / 2;
}
class Solution
{

public:
    int trailingZeroes(int n)
    {
        int result = 0;
        int temp = 15625;
        while (temp != 1)
        {
            result += n / temp;
            temp /= 5;
        }
        return result;
    }
};
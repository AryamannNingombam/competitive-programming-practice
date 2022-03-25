class Solution
{
    int get_num(int n)
    {
        int result = 0;
        while (n != 0)
        {
            result += (n % 10) * (n % 10);
            n /= 10;
        }
        return result;
    }

public:
    bool isHappy(int n)
    {
        if (n == 1)
            return true;
        map<int, bool> hash;
        while (1)
        {
            int num = get_num(n);
            if (num == n)
                return true;
            if (hash[num])
                return false;
            hash[num] = true;

            n = num;
        }
        return false;
    }
};
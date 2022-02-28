class Solution
{
public:
    double pow_negative(double x, long n)
    {
        if (n == 0)
            return 1;
        double result = pow_negative(x, n / 2);
        if (n & 1)
            return (1 / x) * (result) * (result);
        return (result) * (result);
    }
    double pow_positive(double x, long n)
    {
        if (n == 0)
            return 1;
        double result = pow_positive(x, n / 2);
        // odd
        if (n & 1)
        {
            return x * result * result;
        }
        else
        {
            return result * result;
        }
    }
    double myPow(double x, int n)
    {

        if (n < 0)
            return pow_negative(x, -((long)n));
        return pow_positive(x, n);
    }
};
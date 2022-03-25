int divide(int dividend, int divisor)
{
    // Get the sign of the quotient
    int sign = -1;
    if ((divisor >= 0) == (dividend >= 0))
        sign = 1;
    // Make dividend and divisor negative to avoid overflow
    if (dividend >= 0)
        dividend = -dividend;
    if (divisor >= 0)
        divisor = -divisor;

    // quotient = min negative int (-2^32)
    int quotient = 0x80000000;

    // Building a table of divisors [divisor, divisor*2^1, divisor*2^2, ..., divisor*2^32]
    int current_multiple = 0;
    int divisor_multiples[32] = {divisor};
    int quotient_multiples[32] = {1};

    while (true)
    {
        // Stop if divisor_multiple[i] > dividend or < min_int/2
        if (divisor_multiples[current_multiple] < -1073741823 ||
            divisor_multiples[current_multiple] < dividend)
        {
            break;
        }
        current_multiple += 1;
        quotient_multiples[current_multiple] = quotient_multiples[current_multiple - 1] +
                                               quotient_multiples[current_multiple - 1];
        divisor_multiples[current_multiple] = divisor_multiples[current_multiple - 1] +
                                              divisor_multiples[current_multiple - 1];
    }

    while (current_multiple > -1)
    {
        while (dividend <= divisor_multiples[current_multiple])
        {
            quotient += quotient_multiples[current_multiple];
            dividend -= divisor_multiples[current_multiple];
        }
        current_multiple -= 1;
    }

    if (sign > 0)
    {
        if (quotient > -1)
        {
            return 2147483647; // Return max int if it would have overflowed
        }
        return (quotient + 1) + 2147483647; // Convert to positive and return otherwise
    }
    return -(quotient + 2147483647) - 1; // Convert to negative and return (can't overflow as negative)
}
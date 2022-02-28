class Solution
{
public:
    int maxArea(vector<int> &height)
    {

        const int size = height.size();
        int first_pointer = 0, second_pointer = size - 1;
        int result = 0;
        while (first_pointer < second_pointer)
        {
            int temp = min(height[first_pointer], height[second_pointer]) * (second_pointer - first_pointer);
            result = max(temp, result);
            if (height[first_pointer] < height[second_pointer])
                first_pointer++;
            else
                second_pointer--;
        }
        return result;
    }
};
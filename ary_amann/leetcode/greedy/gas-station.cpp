class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int current = 0, total = 0, start = 0;

        for (int i = 0; i < gas.size(); i++)
        {
            current += gas[i] - cost[i];
            total += gas[i] - cost[i];
            if (current < 0)
            {
                start = i + 1;
                current = 0;
            }
        }

        if (total >= 0)
            return start;

        return -1;
    }
};
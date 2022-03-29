class Solution
{
    int evaluate(int a, int b, char c)
    {
        switch (c)
        {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            return 0;
        }
    }

public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> values;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (isalnum(tokens[i][0]) || (tokens[i].size() > 1 && isalnum(tokens[i][1])))
                values.push(stoi(tokens[i]));
            else
            {
                int a = values.top();
                values.pop();
                int b = values.top();
                values.pop();
                int result = evaluate(b, a, tokens[i][0]);
                values.push(result);
            }
        }
        return values.top();
    }
};
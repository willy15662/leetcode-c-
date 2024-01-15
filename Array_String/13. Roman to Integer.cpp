class Solution
{
public:
    int romanToInt(string s)
    {
        int value = 0;
        unordered_map<char, int> T = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};

        for (int i = 0; i < s.size() - 1; ++i)
        {
            if (T[s[i]] < T[s[i + 1]])
            {
                value -= T[s[i]];
            }
            else
                value += T[s[i]];
        }
        value += T[s[s.size() - 1]];
        return value;
    }
};

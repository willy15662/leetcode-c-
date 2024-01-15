// 1
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string v;
        char c;
        int same = 1, j = 0;

        while (same)
        {
            c = strs[0][j];
            if (c == 0)
                same = 0;
            for (int i = 1; i < strs.size(); ++i)
            {
                if (c != strs[i][j])
                    same = 0;
            }
            ++j;
        }
        for (int i = 0; i < j - 1; ++i)
            v += strs[0][i];

        return v;
    }
};

// 2
class Solution
{
public:
    string longestCommonPrefix(vector<string> &v)
    {
        string ans = "";
        sort(v.begin(), v.end());
        int n = v.size();
        string first = v[0], last = v[n - 1];
        for (int i = 0; i < min(first.size(), last.size()); i++)
        {
            if (first[i] != last[i])
            {
                return ans;
            }
            ans += first[i];
        }
        return ans;
    }
};

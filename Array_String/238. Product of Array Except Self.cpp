class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int sum = 1, zero_cnt = 0;
        vector<int> ans;
        for (int i : nums)
        {
            if (i == 0)
                zero_cnt++;
            else
                sum *= i;
            if (zero_cnt > 1)
                break;
        }
        if (zero_cnt > 1)
            for (int i : nums)
                ans.push_back(0);

        else if (zero_cnt == 1)
            for (int i : nums)
            {
                if (i == 0)
                    ans.push_back(sum);
                else
                    ans.push_back(0);
            }
        else
            for (int i : nums)
                ans.push_back(sum / i);
        return ans;
    }
};
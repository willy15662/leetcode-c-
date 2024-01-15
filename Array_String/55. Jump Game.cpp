class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        if (nums[0] == 0 && n != 1)
        {
            return false;
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (nums[i] == 0)
            {
                if (i == n - 1)
                {
                    for (int j = i - 1, k = 1; j >= 0; j--, k++)
                    {
                        if (nums[j] >= k)
                            break;
                        if (j == 0 && nums[0] < n - 1)
                            return false;
                    }
                }
                else
                {
                    for (int j = i - 1, k = 1; j >= 0; j--, k++)
                    {
                        if (nums[j] > k)
                            break;
                        if (j == 0 && nums[0] < n - 1)
                            return false;
                    }
                }
            }
        }
        return true;
    }
};

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size(), k = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            k++;
            if (nums[i] >= k)
                k = 0;
        }
        if (k)
            return false;
        else
            return true;
    }
};
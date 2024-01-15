class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int count = 1, step = 0, temp = 0;
        if (nums.size() == 1)
            return 0;
        for (int i = 0; i <= step; ++i)
        {
            if (i + nums[i] > temp)
                temp = max(temp, i + nums[i]);
            if (temp >= nums.size() - 1)
                break;
            if (i == step)
            {
                step = temp;
                ++count;
            }
        }
        return count;
    }
};
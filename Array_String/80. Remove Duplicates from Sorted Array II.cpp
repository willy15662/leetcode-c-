class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        {
            int cnt = 1, j = 1;
            for (int i = 1; i < nums.size(); i++)
            {
                if (nums[i] == nums[i - 1])
                {
                    if (++cnt <= 2)
                    {
                        nums[j++] = nums[i];
                    }
                }
                else
                {
                    nums[j++] = nums[i];
                    cnt = 1;
                }
            }

            return j;
        }
    }
};
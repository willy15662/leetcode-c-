class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> copynums = nums;
        for (int i = 0; i < nums.size(); i++)
        {
            nums[(i + k) % nums.size()] = copynums[i];
        }
    }
};

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
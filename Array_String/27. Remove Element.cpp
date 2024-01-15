class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 1;
        for (int n : nums)
            if (n > nums[i - 1])
                nums[i++] = n;
        nums.erase(nums.begin() + i, nums.end());
        return i;
    }
};
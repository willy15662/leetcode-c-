class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int ele, count = 0;
        for (int x : nums)
        {
            if (count == 0)
                ele = x;
            ele == x ? ++count : --count;
        }
        return ele;
    }
};

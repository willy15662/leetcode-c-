#include <iostream>
#include <vector>

using namespace std;

int triangularSum(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];
    vector<int> v;
    for (int i = 0; i < n - 1; i++)
    {
        v.push_back((nums[i] + nums[i + 1]) % 10);
    }
    int ans = triangularSum(v);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int n = triangularSum(nums);
    cout << n << endl;
    return 0;
}

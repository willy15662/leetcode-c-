// count sort
class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        int ci[1001] = {0};
        for (int i = 0; i < citations.size(); i++)
        {
            ci[citations[i]]++;
        }
        int count = 0;
        for (int i = 1000; i >= 0; i--)
        {
            count += ci[i];
            if (count >= i)
                return i;
        }
        return count;
    }
};

class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        sort(citations.begin(), citations.end(), greater<int>());
        int index = 0;
        for (index = 0; index < citations.size(); index++)
        {
            if (index >= citations[index])
                break;
        }
        return index;
    }
};

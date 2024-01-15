// java
class Solution
{
public
    int maxProfit(int[] prices)
    {
        //  if (prices.length==1)return 0;
        int max = 0;
        int min = 2141483647;
        for (int i : prices)
        {
            if (min > i)
                min = i;
            int a = i - min;
            if (a > max)
                max = a;
        }
        return max;
    }
}

// c++
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min = prices[0], MaxPrice = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min)
                min = prices[i];
            else if (MaxPrice < prices[i] - min)
                MaxPrice = prices[i] - min;
        }
        return MaxPrice;
    }
};
// c++
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int Min = prices[0], MaxPrice = 0;
        for (int i : prices)
        {
            Min = min(Min, i);
            MaxPrice = max(MaxPrice, i - Min);
        }
        return MaxPrice;
    }
};

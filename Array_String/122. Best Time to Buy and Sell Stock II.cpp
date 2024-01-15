class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int MinPrice = prices[0], profit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1])
            {
                if (i == prices.size() - 1)
                {
                    profit += prices[i] - MinPrice;
                }
                else
                    continue;
            }
            else
            {
                profit += prices[i - 1] - MinPrice;
                MinPrice = prices[i];
            }
        }
        return profit;
    }
};

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            profit += max(prices[i] - prices[i - 1], 0);
        }
        return profit;
    }
};
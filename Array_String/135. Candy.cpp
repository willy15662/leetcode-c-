class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int n = ratings.size();
        int A[n];
        for (int i = 0; i < n; i++)
        {
            A[i] = 1;
        }

        for (int i = 1; i < n; i++)
        {
            if (ratings[i] > ratings[i - 1])
            {
                A[i] = A[i - 1] + 1;
            }
        }

        for (int i = n - 1; i > 0; i--)
        {
            if (ratings[i - 1] > ratings[i])
            {
                A[i - 1] = max(A[i] + 1, A[i - 1]);
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
        }
        return sum;
    }
};

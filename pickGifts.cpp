class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        long long n = gifts.size() - 1;
        for (int i = 0; i < k; i++)
        {
            sort(gifts.begin(), gifts.end());
            gifts[n] = abs(sqrt(gifts[n]));
        }
        long long sum = 0;
        for (int i = 0; i <= n;i++)
        {
            sum = sum + gifts[i];
        }
        return sum;
    }
};

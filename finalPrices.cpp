class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        vector <int> res = prices;
        for(int i = 0; i < prices.size() - 1; i++)
        {
            for(int j = i + 1; j < prices.size(); j++)
            {
                if(prices[j] <= prices[i])
                {
                    res[i] = res[i] - prices[j];
                    j = prices.size();
                }
            }
        }
        return res;
    }
};

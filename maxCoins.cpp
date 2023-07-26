class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
        int n = piles.size() / 3;
        sort(piles.begin(), piles.end());
        int i = piles.size() - 2;
        int res = 0;
        while(n != 0)
        {
            res += piles[i];
            i -= 2;
            n--;
        }
        return res;
    } 
};

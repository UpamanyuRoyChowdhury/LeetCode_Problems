class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) 
    {
        if(k == 1)
        {
            return 0;
        }
        else
        {
            sort(nums.begin(), nums.end());
            int j = nums.size() - 1;
            int i = nums.size() - k;
            int res = nums[j] - nums[i];
            int diff = 0;
            while (i >= 0)
            {
                diff = nums[j] - nums[i];
                if (res > diff)
                {
                    res = diff;
                } 
                i--;
                j--;
            }
            return res;
        }
        return 0;
    }
};

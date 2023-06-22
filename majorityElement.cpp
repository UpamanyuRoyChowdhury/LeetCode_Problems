class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        vector <int> copy = nums;
        sort(copy.begin(), copy.end());
        auto last = unique(copy.begin(), copy.end());
        copy.erase(last, copy.end());
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 0;
        for (; i < copy.size(); i++)
        {
            int count = 0;
            for (; j < nums.size();j++ )
            {
                if (copy[i] == nums[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (count > n / 2)
            {
                return copy[i];
            }
        }
        return -1;
    }
};

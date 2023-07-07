class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int max_count = 0;
        int count = 1;
        for (int i = 0; i < nums.size();i++)
        {
            if(i != nums.size() - 1)
            {
                if(nums[i] + 1 == nums[i + 1] )
                {
                    count++;
                }
                else if (nums[i] == nums[i + 1])
                {
                    continue;
                }
                else
                {
                    if(count > max_count)
                    {
                        max_count = count;
                    }
                    count = 1;
                }
            }
            else
            {
                if(count > max_count)
                {
                    max_count = count;
                }
            }
        }
        return max_count;
    }
};

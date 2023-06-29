class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        for (int i = 0; i < nums.size();)
        {
            int j = i;
            int count = 0;
            for(;j<nums.size();j++)
            {
                if (count < 2)
                {
                    if(nums[j] == nums[i])
                    {
                        count++;
                    }
                    else 
                    {
                        break;
                    }
                }
                else 
                {
                    if (nums[i] == nums[j])
                    {
                        nums.erase(nums.begin() + i + (j - i));
                        j--;
                    }
                    else 
                    {
                        break;
                    }
                }
            }
            i = i + (j - i);
        }
        return nums.size();
    }
};

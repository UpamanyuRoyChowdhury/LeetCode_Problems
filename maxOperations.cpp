class Solution 
{
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());
        int count = 0;
        int m = 0;
        int n = nums.size() - 1;
        while (m < n)
        {
            if (nums[m] >= k)
            {
                m++;
                continue;
            }
            else if(nums[n] >= k)
            {
                n--;
                continue;
            }
            if (nums[m] + nums[n] == k)
            {
                count++;
                m++;
                n--;
            }
            else if (nums[m] + nums[n] < k)
            {
                m++;
            }
            else 
            {
                n--;
            }
        }
        return count;
    }
};

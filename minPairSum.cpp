class Solution {
public:
    int minPairSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int m = 0; 
        int n = nums.size() - 1;
        int max = INT_MIN;
        while (m < n)
        {
            int sum = 0; 
            sum = nums[m] + nums[n];
            if (sum > max)
            {
                max = sum;
            }
            m++;
            n--;
        }
        return max;
    }
};
 

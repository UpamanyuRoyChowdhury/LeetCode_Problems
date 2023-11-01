class Solution {
public:
    int triangularSum(vector<int>& nums) 
    {
        int n = nums.size() - 1;
        while(true)
        {
            if(n == 0)
            {
                break;
            }
            vector<int> v(n, 0);
            for(int i = 0; i < v.size(); i++)
            {
                v[i] = (nums[i] + nums[i + 1]) % 10;
            }
            n--;
            nums = v;
        }
        return nums[0];
    }
};

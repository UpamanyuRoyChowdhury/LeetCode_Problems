class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        k = k % n;
        // for (long i = 0; i < k; i++)
        // {
        //     // long lastElement = nums.back();
        //     // nums.pop_back();
        //     // nums.insert(nums.begin(), lastElement);
        // }
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector <int> left;
        vector <int> right;
        vector <int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i < n)
            {
                left.push_back(nums[i]);
            }
            else
            {
                right.push_back(nums[i]);
            }
        }
        for (int i = 0; i < n ; i++)
        {
            res.push_back(left[i]);
            res.push_back(right[i]);
        }
        return res;
    }
};

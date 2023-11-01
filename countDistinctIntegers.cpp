class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) 
    {
        vector <int> res = nums;
        for(int i = 0; i < nums.size(); i++)
        {
            string s = to_string(nums[i]);
            reverse(s.begin(), s.end());
            res.push_back(stoi(s));
        }
        sort(res.begin(), res.end());
        auto it = unique(res.begin(), res.end());
        res.erase(it , res.end());
        return res.size();
    }
};

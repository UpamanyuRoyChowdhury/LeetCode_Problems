class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int target = 0;
        int count = 0;
        auto pos = find(nums.begin(), nums.end(), target);
        while (pos != nums.end())
        {
            nums.erase(pos);
            pos = find(nums.begin(), nums.end(), target);
            count++;
        }
        for (int i = 0; i <count;i++)
        {
            nums.push_back(0);
        }
    }
};


class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
        vector<int> res;
        int leftsum;
        int rightsum;
        for(int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i < j)
                {
                    leftsum = leftsum + nums[j];
                }    
                else if(i > j)
                {
                    rightsum = rightsum + nums[j];
                }
                else if(i = j)
                {
                    continue;
                }
            }
            res.push_back(abs(leftsum - rightsum));
            leftsum = 0;
            rightsum = 0;
        }
        return res;
    }
};

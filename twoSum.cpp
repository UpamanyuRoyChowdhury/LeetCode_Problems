#include <bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            int num1 , num2;
            vector <int> res;
            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i; j < nums.size(); j++)
                {
                    if (j == i )
                    {
                        continue; 
                    }
                    if (nums[i] + nums[j] == target)
                    {
                        num1 = i;
                        res.push_back(num1);
                        num2 = j;
                        res.push_back(num2);
                        break;
                    }
                }
            }
            return res;
        }
};


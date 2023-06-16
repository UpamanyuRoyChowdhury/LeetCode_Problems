#include <bits/stdc++.h>
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        int i , j = 0, count = 0;
        char buf[100];
        vector <string> res;
        if (nums.size() == 1)
        {
            sprintf(buf,"%d", nums[i]);
            res.push_back(buf);
            return res;
        }
        else
        {
            for(i = 0; i < nums.size();)
            {
                while (true)
                {
                    if ((nums[j] + 1) != nums[j + 1])
                    {
                        if (i == j)
                        {
                            sprintf(buf,"%d", nums[i]);
                            res.push_back(buf);
                        }
                        else 
                        {
                            sprintf(buf,"%d->%d", nums[i], nums[j]);
                            res.push_back(buf);
                        }
                        j++;
                        break;
                    }
                    else
                    {
                        j++;
                        if(j == nums.size() - 1)
                        {
                            sprintf(buf,"%d->%d", nums[i], nums[j]);
                            res.push_back(buf);
                            return res;
                        }
                    } 
                }
                i = i + (j - i);
                if(i == nums.size() - 1)
                {
                    sprintf(buf,"%d", nums[i]);
                    res.push_back(buf);
                    break;
                }
            }
        }
        return res;
    }
};

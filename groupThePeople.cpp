class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
        vector<vector<int>> res;
        for (int i = 0; i < groupSizes.size(); i++)
        {
            if(groupSizes[i] == 0)
            {
                continue;
            }
            else
            {
                vector<int> group;
                int org = groupSizes[i];
                int j = i;
                int count = 0;
                while(count < org)
                {
                    if(j == groupSizes.size())
                    {
                        break;
                    }
                    else
                    {
                        if (groupSizes[j] == org && groupSizes[j] != 0)
                        {
                            group.push_back(j);
                            groupSizes[j] = 0;
                            count++;
                        }
                        j++;
                    }
                } 
                res.push_back(group);  
            }                      
        } 
        return res;
    } 
};

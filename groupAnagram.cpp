class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> res;
        vector<string> dup = strs;
        for (int i = 0; i < dup.size(); i++)
        {
           sort(dup[i].begin(), dup[i].end());
        }
        vector<vector<int>> place;
        for (int i = 0; i < dup.size(); i++)
        {
            if (dup[i] == " ")
            {
                continue;
            }
            else
            {
                vector <int> group;
                group.push_back(i);
                string target = dup[i];
                for (int j = 0; j < dup.size(); j++)
                {
                    if (i == j)
                    {
                        continue;
                    }
                    else 
                    {
                        if (dup[j] == target)
                        {
                            dup[j] = " ";
                            group.push_back(j);
                        }
                    }
                }                
                place.push_back(group);
            }
        }
        for (int i = 0; i < place.size(); i++)
        {
            vector <string> internal;
            for (int j = 0; j < place[i].size(); j++)
            {
                internal.push_back(strs[place[i][j]]);
            }
            res.push_back(internal);
        }
        return res;
    }
};

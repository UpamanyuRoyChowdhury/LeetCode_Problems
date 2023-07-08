class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) 
    {
        int max = 0;
        int max_index = 0;
        for (int i = 0 ; i < mat.size();i++)
        {
            int count = 0;
            for (int j = 0; j< mat[i].size();j++)
            {
                if (mat[i][j] == 1)
                {
                    count++;
                }
            }
            if (count > max)
            {
                max = count;
                max_index = i;
            }
        }
        vector <int> res;
        res.push_back(max_index);
        res.push_back(max);
        return res;
    }
};

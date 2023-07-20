class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
    {
        vector <int> maxCol;
        vector <int> maxRow;
        int sumOrg = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            int max1 = INT_MIN;
            for(int j = 0; j < grid[i].size(); j++)
            {
                sumOrg += grid[i][j];
                if(grid[i][j] > max1)
                {
                    max1 = grid[i][j];
                }
            }
            maxCol.push_back(max2);

            int max2 = INT_MIN;
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[j][i] > max2)
                {
                    max2 = grid[j][i];
                }
            }
            maxRow.push_back(max1);
        }
        
        int n = grid.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                sum = sum + min(maxRow[i], maxCol[j]);
            }
        }
        int ans = sum - sumOrg;
        return ans;
    }
};

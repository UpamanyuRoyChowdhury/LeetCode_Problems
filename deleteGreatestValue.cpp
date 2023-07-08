class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int result = 0;

        while (!grid.empty()) 
        {
            vector<int> max_values;

            for (int i = 0; i < grid.size(); i++) {
                int max_val = 0;
                int max_index = 0;

                for (int j = 0; j < grid[i].size(); j++) 
                {
                    if (grid[i][j] > max_val) {
                        max_val = grid[i][j];
                        max_index = j;
                    }
                }
                max_values.push_back(max_val);
                grid[i].erase(grid[i].begin() + max_index);
            }

            sort(max_values.begin(), max_values.end(), greater<int>());
            result += max_values[0];

            for (auto it = grid.begin(); it != grid.end();) {
                if (it->empty()) {
                    it = grid.erase(it);
                } else {
                    ++it;
                }
            }
        }

        return result;
    }
};

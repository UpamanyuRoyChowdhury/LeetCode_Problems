class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) 
    {
        vector <int> v;
        vector <int> res;
        for(int i = 0; i < points.size(); i++)
        {
            v.push_back(points[i][0]);
        }
        sort(v.begin(), v.end());
        for(int i = 1; i < v.size(); i++)
        {
            res.push_back(v[i] - v[i - 1]);
        }
        sort(res.begin(), res.end());
        return res[res.size() - 1];
    }
};

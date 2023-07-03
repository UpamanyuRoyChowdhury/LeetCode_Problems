class Solution {
public:
    string restoreString(string s, vector<int>& indices) 
    {
        vector <char> res(s.size());
        for(int i = 0; i < indices.size(); i++)
        {
            res[indices[i]] = s[i];
        }
        string str(res.begin(), res.end()); 
        return str;
    }
};

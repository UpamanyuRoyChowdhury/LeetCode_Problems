class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) 
    {
        vector <int> res;
        res.push_back(first);
        for(int i = 0; i < encoded.size(); i++)
        {
            int reserve = res[i] ^ encoded[i];
            res.push_back(reserve);
        }
        return res;
    }
};

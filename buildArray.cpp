class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        vector <string> res;
        vector <int> stream;
        for(int i = 0; i < n; i++)
        {
            if((i + 1) > target[target.size() - 1])
            {
                break;
            }
            stream.push_back(i + 1);
        }

        int targetIndex = 0;
        for(int i = 0; i < stream.size(); i++)
        {
            if(stream[i] == target[targetIndex])
            {
                res.push_back("Push");
                targetIndex++;
            }
            else if(stream[i] != target[targetIndex])
            {
                res.push_back("Push");
                res.push_back("Pop");
            }
        }
        return res;
    }
};

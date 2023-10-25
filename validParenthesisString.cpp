class Solution {
public:
    int maxDepth(string s) 
    {
        stack <int> sta;
        int count = 0;
        vector <int> res;
        if(s.size() == 0 || s.size() == 1 || s.find('(') == string :: npos)
        {
            return 0;
        }
        else
        {
            for(int i = 0; i < s.size(); i++)
            {
                if(s[i] == '(')
                {
                    sta.push(s[i]);
                    count++;
                }
                else if(s[i] == ')')
                {
                    sta.pop();
                    res.push_back(count);
                    count--;
                }
            }
            sort(res.begin(), res.end());
            return res[res.size() - 1];
        }
    }
};

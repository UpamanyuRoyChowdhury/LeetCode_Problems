class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack <char> sta;
        for(int i = 0; i < s.size(); i++)
        {
            if(sta.empty() == false && sta.top() == s[i])
            {
                sta.pop();
            }
            else
            {
                sta.push(s[i]);
            }
        }
        string res = "";
        while(!sta.empty())
        {
            res += sta.top();
            sta.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

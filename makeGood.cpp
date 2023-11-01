class Solution {
public:
    string makeGood(string s) 
    {
        stack <char> sta;
        string res = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(i == 0)
            {
                sta.push(s[i]);
            }
            else if((!sta.empty() && islower(sta.top()) && toupper(sta.top()) == s[i]))
            {
                sta.pop();
            }
            else if(!sta.empty() && isupper(sta.top()) && tolower(sta.top()) == s[i])
            {
                sta.pop();
            }
            else
            {
                sta.push(s[i]);
            }
        }
        while(!sta.empty())
        {
            res += sta.top();
            sta.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

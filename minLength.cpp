class Solution {
public:
    int minLength(string s) 
    {
        stack <char> sta;
        string res;
        for(int i = 0; i < s.size(); i++)
        {
            if(sta.empty() != true && s[i] == 'D' && sta.top() == 'C')
            {
                sta.pop();
            }
            else if(sta.empty() != true && s[i] == 'B' && sta.top() == 'A')
            {
                sta.pop();
            }
            else
            {
                sta.push(s[i]);
            } 
        }
        return sta.size();
    }
};

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) 
    {
        stack <char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(!(st.empty()))
                {
                    if((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']'))
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(s[i]);
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int count1 = 0;
        int count2 = s.length();
        int pos = t.find(s[0]);
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = i; j < t.length(); j++)
            {
                if (s[i] == t[j])
                {
                    if (j >= pos)
                    {
                        pos = j;
                        count1++;
                        t.erase(t.begin() + j);
                        break;
                    }
                }
            }
        }
        if(count1 != count2)
        {
            return false;
        }
        else 
        {
            return true;
        }
    }
};

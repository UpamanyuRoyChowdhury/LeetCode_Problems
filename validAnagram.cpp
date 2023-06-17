class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int n = t.length();      
        for (int i = 0; i < s.length(); i++)
        {
            bool flag2 = false;
            for(int j = 0; j < n; j++)
            {
                if (s[i] == t[j])
                {
                    t.erase(t.begin() + j);
                    n = n - 1;
                    flag2 = true;
                    break;
                }
            }
            if (flag2 == false)
            {
                return false;
            }
        }
        if(n != 0)
        {
            return false;
        }
        else 
        {
            return true;            
        }

    }
};

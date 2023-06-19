class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n = s.length();
        if (n == 1)
        {
            return 1;
        }
        else
        {
            int count = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i] != ' ')
                {
                    count++;
                    if ((i != 0) && (s[i - 1] == ' '))
                    {
                        break;
                    }
                }
                else if (s[i] == ' ')
                {
                    continue;
                }
            }
            return count;
        }
    }
};

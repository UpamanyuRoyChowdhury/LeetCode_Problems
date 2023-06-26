class Solution {
public:
    bool isPalindrome(string s) 
    {
        string res;
        for (char& c : s) 
        {
            if (isalpha(c) && isupper(c))
            {
                c = tolower(c);
            }
            if (isalnum(c))
            {
                res += c;
            }
        }

        int left = 0;
        int right = res.size() - 1;

        while (left <= right)
        {
            if(res[left] != res[right])
            {
                return false;
            }
            else
            {
                left++;
                right--;
            }
        }
        return true;
    }
};

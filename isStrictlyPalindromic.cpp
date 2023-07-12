class Solution {
public:
    string convert(int n, int base)
    {
        string res;
        int rem;
        while (n != 0)
        {
            rem = n % base;
            n = n / base;
            char ch = static_cast<char>(rem);
            res += ch;
        }
        reverse(res.begin(), res.end());
        return res;
    }

    bool isPalindrome(string str)
    {
        int m = 0;
        int n = str.size() - 1;
        while (m < n)
        {
            if(str[m] != str[n])
            {
                return false;
            }
            m++;
            n--;
        }
        return true;
    }

    bool isStrictlyPalindromic(int n) 
    {
        int i = 2;
        while (i <= n)
        {
            string str = convert(n , i);
            if(isPalindrome(str))
            {
                i++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

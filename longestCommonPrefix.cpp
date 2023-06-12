#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string str2 = "";
        if (strs.size() < 2)
        {
            if (strs.empty() == true)
            {
                return str2;
            }
            else if (strs.size() == 1)
            {
                str2 = strs[0];
                return str2;
            }
        }
        else
        {
            for (int i = 0; i < 1; i++)
            {
                if (strs[i].empty() != true)
                {
                    for (int j = 0; j < 1; j++)
                    {
                        for (int k = 1; k <= strs[i].size(); k++)
                        {
                            string str1 = strs[i].substr(j,k);
                            int flag = 0;
                            for (int l = 1; l < strs.size(); l++)
                            {
                                if ((strs[l].find(str1) != string::npos) && (strs[l].find(str1) == j))
                                {
                                    flag = 1;
                                }
                                else
                                {
                                    flag = -1;
                                    break;
                                }
                            }
                            if (flag == 1)
                            {
                                if (str1.length() > str2.length())
                                {
                                    str2 = str1;
                                }
                            }
                        }
                    }
                }
                else 
                {
                    return str2;
                }
            }
        }
        return str2;
    }
};#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string str2 = "";
        if (strs.size() < 2)
        {
            if (strs.empty() == true)
            {
                return str2;
            }
            else if (strs.size() == 1)
            {
                str2 = strs[0];
                return str2;
            }
        }
        else
        {
            for (int i = 0; i < 1; i++)
            {
                if (strs[i].empty() != true)
                {
                    for (int j = 0; j < 1; j++)
                    {
                        for (int k = 1; k <= strs[i].size(); k++)
                        {
                            string str1 = strs[i].substr(j,k);
                            int flag = 0;
                            for (int l = 1; l < strs.size(); l++)
                            {
                                if ((strs[l].find(str1) != string::npos) && (strs[l].find(str1) == j))
                                {
                                    flag = 1;
                                }
                                else
                                {
                                    flag = -1;
                                    break;
                                }
                            }
                            if (flag == 1)
                            {
                                if (str1.length() > str2.length())
                                {
                                    str2 = str1;
                                }
                            }
                        }
                    }
                }
                else 
                {
                    return str2;
                }
            }
        }
        return str2;
    }
};
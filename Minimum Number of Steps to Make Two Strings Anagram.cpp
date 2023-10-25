class Solution {
public:
    int minSteps(string s, string t) 
    {
        map <char, int> mpp1;
        map <char, int> mpp2;
        for(int i = 0; i < s.size(); i++)
        {
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }
        int count = 0;
        for(auto it = mpp1.begin(); it != mpp1.end(); it++)
        {
            auto key = it->first;
            auto pos = mpp2.find(key);
            if(pos != mpp2.end())
            {
                if(mpp2[key] < mpp1[key])
                {
                    count += (mpp1[key] - mpp2[key]);
                }
            }
            else
            {
                count += mpp1[key];
            }
        }  
        return count;
    }
};

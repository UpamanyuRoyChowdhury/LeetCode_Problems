class Solution {
public:
    bool match(string word ,string pattern)
    {
        unordered_map <char , char> mappings;
        unordered_set <char> usedChar;

        for(int i = 0; i < word.size(); i++)
        {
            char w = word[i];
            char p = pattern[i];

            if(mappings.find(p) != mappings.end())
            {
                if(mappings[p] != w)
                {
                    return false;
                }
            }
            else 
            {
                if(usedChar.find(w) != usedChar.end())
                {
                    return false;
                }
            }
            mappings[p] = w;
            usedChar.insert(w);
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector <string> res;
        for(int i = 0; i < words.size(); i++)
        {
            if(match(words[i], pattern))
            {
                res.push_back(words[i]);
            }
        }
        return res;
    }
};

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        int greatest = 0;
        for (int i = 0; i < sentences.size(); i++)
        {
            int wordCount = 1;
            for (int j = 0; j < sentences[i].size(); j++)
            {
                if (sentences[i][j] == ' ')
                {
                    wordCount += 1;
                }
            }
            if (wordCount > greatest)
            {
                greatest = wordCount;
            }
        }
        return greatest;
    }
};

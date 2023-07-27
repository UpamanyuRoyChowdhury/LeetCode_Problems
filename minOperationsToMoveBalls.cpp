class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        vector <int> positions;
        for(int i = 0; i < boxes.size(); i++)
        {
            if (boxes[i] == '1')
            {
                positions.push_back(i);
            }
        }

        vector <int> res;
        for (int i = 0; i < boxes.size(); i++)
        {
            int min = 0;
            for(int j = 0; j < positions.size(); j++)
            {
                min += abs(positions[j] - i);
            }
            res.push_back(min);
        }
        return res;
    } 
};

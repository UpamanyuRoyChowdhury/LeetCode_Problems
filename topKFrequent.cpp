class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector <int> copy = nums;
        sort(copy.begin(), copy.end());
        auto last = unique(copy.begin(), copy.end());
        copy.erase(last, copy.end());
        
        vector <int> occ;
        sort(nums.begin(), nums.end());
        int j = 0;
        for(int i = 0; i < copy.size(); i++)
        {
            int count = 0;
            for(; j < nums.size();j++)
            {
                if(copy[i] == nums[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            occ.push_back(count);
        }

        vector <int> res;
        for(int i = 0 ; i < k; i++)
        {
            int index = 0;
            int max = 0;
            for (int j = 0; j < occ.size();j++)
            {
                if (occ[j] > max)
                {
                    max = occ[j];
                    index = j;
                }
            }
            res.push_back(copy[index]);
            occ[index] = 0;
        }        
        return res;
    }
}; 

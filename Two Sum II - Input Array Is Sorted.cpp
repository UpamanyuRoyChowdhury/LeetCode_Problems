class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int m = 0;
        int n = numbers.size() -  1;
        vector <int> res;
        while (m < n)
        {
            if (numbers[m] + numbers[n] == target)
            {
                res.push_back(m + 1);
                res.push_back(n + 1);
                break;
            }
            else if (numbers[m] + numbers[n] <= target)
            {
                m++;
            }
            else
            {
                n--;
            }
        }
        return res;
    }
};

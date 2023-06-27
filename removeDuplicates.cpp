class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int count = 0;
        int i = 0;
        int j = 0;
        int n = nums.size();
        if (n == 1)
        {
            count = 1;
        }
        else
        {
            while(true)
            {
                j = i;
                if (i != n - 1)
                {
                    while (true)
                    {
                        if(i == (n - 1))
                        {
                            count++;
                            return count;
                        }
                        else if (nums[i] == nums[j + 1])
                        {
                            nums.erase(nums.begin() + j);
                            n = n - 1;
                        }
                        else if (nums[i] != nums[j+1])
                        {
                            count++;
                            break;
                        }
                    }
                }
                else if(i == (n - 1))
                {
                    count++;
                    break;
                }
                i++;
            }
        }
        return count ;
    }
};

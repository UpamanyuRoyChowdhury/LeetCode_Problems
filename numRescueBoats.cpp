class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        sort(people.begin(), people.end());
        int m = 0;
        int n = people.size() - 1;
        int count = 0;
        while (m <= n)
        {
            if (people[m] + people[n] <= limit)
            {
                count++;
                m++;
                n--;
            }
            else if(people[m] + people[n] > limit)
            {
                count++;
                n--;
            }
        }
        return count;
    }
};

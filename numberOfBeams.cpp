class Solution {
public:
    int numberOfBeams(vector<string>& bank) 
    {
        vector <int> oneCount;
        oneCount.reserve(bank.size());
        transform(bank.begin(), bank.end(), back_inserter(oneCount), [](string& binaryStr) 
        {
            return count(binaryStr.begin(), binaryStr.end(), '1');
        });

        int res = 0, m = 0, n = 1;
        while(n < oneCount.size())
        {
            if(oneCount[n] == 0)
            {
                n++;
            }
            else if(oneCount[m] == 0)
            {
                m++;
            }
            else if(oneCount[m] == 0 && oneCount[n] == 0)
            {
                m++;
                n++;
            }
            else if(m == n)
            {
                n++;
            }
            else
            {
                res += oneCount[m]*oneCount[n];
                n++;
                m++;
            }
        }
        return res;
    }
};

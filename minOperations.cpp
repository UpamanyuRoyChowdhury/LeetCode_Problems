class Solution {
public:
    int minOperations(int n) 
    {
        double res = 0;
        if(n % 2 == 0)
        {
            double terms = n / 2;
            res = (terms/2)*(2 + (terms - 1)*2);
        }
        else
        {
            double terms = n / 2;
            res = (terms/2)*(4 + (terms - 1)*2);
        }
        return res;
    }
};

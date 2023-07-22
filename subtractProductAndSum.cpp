class Solution {
public:
    int subtractProductAndSum(int n) 
    {
       int prod = 1;
       int sum = 0; 
       while(n != 0)
       {
           int r = n % 10;
           sum = sum + r;
           prod = prod*r;
           n = n / 10;
       }
       int res = prod - sum;
       return res;
    }
};

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int m = 0; 
        int n = height.size() - 1;
        int max = 0;
        while (m < n)
        {
            int length = n - m;
            int breadth = std::min(height[m], height[n]);
            int area = length*breadth;
            if (area > max)
            {
                max = area;
            }
            if (height[n] > height[m])
            {
                m++;
            }
            else
            {
                n--;
            }
        }
        return max;
    }
};

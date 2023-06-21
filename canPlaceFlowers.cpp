class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        if (n == 0)
        {
            return true;
        }
        else
        {
            for (int i = 0; i < flowerbed.size(); i++)
            {
                if (flowerbed[i] == 0)
                {
                    if(i != 0 && i != flowerbed.size() - 1)
                    {
                        if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
                        {
                            flowerbed[i] = 1;
                            n = n - 1;
                        }
                    }
                    else if (i == 0 && i != flowerbed.size() - 1)
                    {
                        if (flowerbed[i + 1] == 0 )
                        {
                            flowerbed[i] = 1;
                            n = n - 1;
                        }
                    }
                    else if (i == flowerbed.size() - 1 && i != 0)
                    {
                        if (flowerbed[i - 1] == 0 )
                        {
                            flowerbed[i] = 1;
                            n = n - 1;
                        }
                    }
                    else if (i == 0 && i == flowerbed.size() - 1)
                    {
                        if (n == 1)
                        {
                            return true;
                        }
                        else 
                        {
                            return false;
                        }
                    }
                }
                if (n == 0)
                {
                    return true;
                }
            }
            return false;
        }
    }
};

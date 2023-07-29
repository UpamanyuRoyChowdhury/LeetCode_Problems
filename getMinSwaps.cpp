class Solution {
public:
    int getMinSwaps(string num, int k) 
    {
        std::string originalNum = num;
        int count = 0;

        // Find the kth smallest wonderful integer
        while (k--) {
            std::next_permutation(num.begin(), num.end());
            count++;
        }

        // Find the minimum number of adjacent digit swaps needed to transform num into the kth smallest wonderful integer
        int swaps = 0;
        int n = num.length();
        for (int i = 0; i < n; i++) {
            if (num[i] != originalNum[i]) {
                int j = i + 1;
                while (num[j] != originalNum[i])
                    j++;
                while (j > i) {
                    std::swap(num[j], num[j - 1]);
                    j--;
                    swaps++;
                }
            }
        }

        return swaps;
    }
};

#include <vector>
#include <string>

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> lastOccurrence(26, -1); // To store the last occurrence of each character

        // Find the last occurrence of each character in the string
        for (int i = 0; i < s.size(); i++) {
            lastOccurrence[s[i] - 'a'] = i;
        }

        vector<int> partitions;
        int start = 0;
        int end = 0;

        // Find the partitions
        for (int i = 0; i < s.size(); i++) {
            end = max(end, lastOccurrence[s[i] - 'a']);
            if (i == end) {
                partitions.push_back(end - start + 1);
                start = end + 1;
            }
        }

        return partitions;
    }
};

class Solution {
public:
    string reversePrefix(string word, char ch) {
        size_t found = word.find(ch);
        if (found != string::npos) {
            int m = 0;
            int n = found;
            while (m <= n) {
                char temp = word[m];
                word[m] = word[n];
                word[n] = temp;
                ++m;
                --n;
            }
            return word;
        }
        return word;
    }
};

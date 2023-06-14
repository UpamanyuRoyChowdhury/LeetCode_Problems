using namespace std;
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        int count = 0;
        for(int i = 0; i < emails.size(); i++)
        {
            size_t pos1 = emails[i].find('+');
            size_t pos2 = emails[i].find('@');
            if (pos1 != string::npos && pos1 < pos2)
            {
                emails[i].erase(emails[i].begin() + pos1, emails[i].begin() + pos2);
            }
            size_t pos3 = emails[i].find('.');
            size_t pos4 = emails[i].find('@');
            while (pos3 <= pos4 && pos3 != string::npos) 
            {
                emails[i].erase(pos3, 1);
                pos4--;
                pos3 = emails[i].find('.', pos3 + 1);
            }
        }

        
        sort(emails.begin(), emails.end()); // Sort the vector to bring duplicate elements together

        auto it = unique(emails.begin(), emails.end()); // Remove consecutive duplicate elements

        emails.erase(it, emails.end()); // Erase the remaining duplicate elements
        count = emails.size();
        return count;
    }
};

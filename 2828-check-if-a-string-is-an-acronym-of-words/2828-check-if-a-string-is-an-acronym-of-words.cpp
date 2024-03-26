class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        bool ans;
        string tmp;
        for (int i = 0;i < words.size();i++)
            tmp += words[i][0];
        if (tmp == s) ans = true;
        else ans = false;
        return ans;
    }
};
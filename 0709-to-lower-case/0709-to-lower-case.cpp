class Solution {
public:
    string toLowerCase(string s) {
        for(auto i = 0;i < s.length();i++)
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += ('a' - 'A');
        return s;
    }
};
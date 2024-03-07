class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string ans(n, '.');
        for(auto i = 0;i < s.size();i++)
            ans[indices[i]] = s[i];
        return ans;
    }
};
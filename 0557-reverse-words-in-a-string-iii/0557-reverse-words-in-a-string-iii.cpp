class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string tmp = "";
        int n = s.size();
        for(int i = 0;i < n;i++){
            if(s[i] == ' ' || i == n - 1){
                if(i == n - 1)
                    tmp += s[i];
                reverse(tmp.begin(),tmp.end());
                ans += tmp;
                if(i != n - 1)
                    ans += ' ';
                tmp = "";
                }
            else tmp += s[i];
        }
        return ans;
    }
};
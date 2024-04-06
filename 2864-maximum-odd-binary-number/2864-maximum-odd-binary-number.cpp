class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans = "";
        int cnt = 0;
        int n = s.size();
        for(int i = 0;i < n;i++){
            if(s[i] == '1')
                cnt++;
            ans += '0';
        }
        ans[n - 1] = '1';
        if(cnt == 1)
            return ans;
        else
            for(int i = 0;i < cnt - 1;i++)
                ans[i] = '1';
        return ans;
    }
};
class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int cnt1 = 0,cnt2 = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == 'R')
                cnt1++;
            else
                cnt2++;
            if(cnt1 == cnt2)
                ans++, cnt1 = 0, cnt2 = 0;
        }
        return ans;
    }
};
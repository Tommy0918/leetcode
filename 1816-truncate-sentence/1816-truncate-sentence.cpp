class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string tmp, ans;
        int cnt = 0;
        while(ss >> tmp){
            cnt++;
            ans += tmp + ' ';
            if(cnt == k) break;
        }
        if(!ans.empty() && ans.back() == ' ') ans.pop_back();
        return ans;
    }
};
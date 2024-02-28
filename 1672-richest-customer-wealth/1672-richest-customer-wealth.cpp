class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        vector<int> ans(n);
        for(auto i = 0;i < n; i++){
            int total = 0;
            for(auto j = 0;j < m;j++)
                total += accounts[i][j];
            ans[i] = total;
        }
        int ans_num = *max_element(ans.begin(), ans.end());
        return ans_num;
    }
};
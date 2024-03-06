class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> ans;
        vector<pair<int, int>> tmp;
        int m = score.size();
        int n = score[0].size();
        for(auto i = 0;i < m;i++)
            tmp.push_back(make_pair(score[i][k], i));
        sort(tmp.begin(),tmp.end());
        for(int i = m - 1;i >= 0;i--)
            ans.push_back(score[tmp[i].second]);
        return ans;
    }
};
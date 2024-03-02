class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        vector<int> ans;
        int q1 = q.size();
        int p1 = p.size();
        for(auto i = 0;i < q1;i++){
            int count = 0;
            for(int j = 0;j < p1;j++){
                int x = pow(p[j][0] - q[i][0], 2);
                int y = pow(p[j][1] - q[i][1], 2);
                int r = pow(q[i][2], 2);
                if(x + y <= r) count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
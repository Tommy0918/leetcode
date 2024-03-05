class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<int> rowmax(n);
        vector<int> colmax(m);
        for(auto i = 0;i < n;i++){
            for(auto j = 0;j < m;j++){
                rowmax[i] = max(grid[i][j], rowmax[i]);
                colmax[j] = max(grid[i][j], colmax[j]);
            }
        }
        for(auto i = 0;i < n;i++){
            for(auto j = 0;j < m;j++)
                ans += min(rowmax[i], colmax[j]) - grid[i][j];
        }
        return ans;
    }
};
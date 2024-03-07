class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> row(n, 0);
        vector<int> col(m, 0);
        for(auto i = 0;i < n;i++){
            for(auto j = 0;j < m;j++){
                row[i] += grid[i][j];
                col[j] += grid[i][j];
            }
        }
        for(auto i = 0;i < n;i++){
            for(auto j = 0;j < m;j++)
                grid[i][j] = 2 * (row[i] + col[j]) - n - m;
        }
        return grid;
    }
};
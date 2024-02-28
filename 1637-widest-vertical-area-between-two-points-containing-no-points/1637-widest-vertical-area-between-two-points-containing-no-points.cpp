class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int maxarea = 0;
        int n = points.size();
        for(auto i = 1;i < n;i++){
            int currarea = points[i][0] - points[i - 1][0];
            maxarea = max(maxarea , currarea);
        }
        return maxarea;
    }
};
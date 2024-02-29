class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        vector<vector <int>> ans, all(n + 1);
        for (auto i = 0;i < n;i++){
            all[groupSizes[i]].push_back(i);
            if(all[groupSizes[i]].size() == groupSizes[i]){
                ans.push_back(all[groupSizes[i]]);
                all[groupSizes[i]].clear();
            }
        }
        return ans;
    }
};
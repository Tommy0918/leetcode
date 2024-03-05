class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        int freq[201] = {0};
        vector<vector<int>> ans;
        for(auto i: nums){
            int &f = freq[i];
            if(f == ans.size())
                ans.push_back({i});
            else
                ans[f].push_back(i);
            f++;
        }
        return ans;
    }
};
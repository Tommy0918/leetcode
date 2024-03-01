class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> ans;
        int max_c = INT_MIN;
        for(auto i = 0;i < n;i++)
            max_c = max(max_c, candies[i]);
        for(auto i = 0;i < n;i++){
            int total = candies[i] + extraCandies;
            if(total >= max_c)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};
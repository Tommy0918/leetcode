class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int mx = 0;
        for(auto i : nums) mx = max(mx, i);
        int ans = 0;
        while(k--){
            ans += mx;
            mx++;
        }
        return ans;
    }
};
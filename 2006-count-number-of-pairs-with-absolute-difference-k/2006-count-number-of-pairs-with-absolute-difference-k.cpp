class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0;
        for(auto i = 0;i < nums.size();i++){
            for(auto j = i + 1;j < nums.size();j++){
                if((i < j) && (abs(nums[i] - nums[j]) == k))
                    ans++;
            }
        }
        return ans;
    }
};
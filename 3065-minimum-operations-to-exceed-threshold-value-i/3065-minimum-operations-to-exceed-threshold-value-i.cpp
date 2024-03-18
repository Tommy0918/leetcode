class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        for(auto i : nums){
            if(i < k)
                ans++;
        }
        return ans;
    }
};
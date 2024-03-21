class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ans = 0;
        for(auto i : nums)
            ans += i;
        for(int i = 0;i < nums.size();i++){
            while(nums[i] > 0){
                int tmp = nums[i] % 10;
                ans -= tmp;
                nums[i] /= 10;
            }
        }
        return ans;
    }
};
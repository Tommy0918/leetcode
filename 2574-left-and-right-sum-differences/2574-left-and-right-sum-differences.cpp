class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size(), lefttmp = 0, righttmp = 0;
        vector<int> ans(n, 0);
        vector<int> left(n, 0), right(n , 0);
        left[0] = 0, right[n - 1] = 0;
        for(auto i = 0;i < n;i++){ 
            if(i > 0) lefttmp += nums[i - 1];
            left[i] += lefttmp;
        }
        for(auto i = n - 1;i >= 0;i--){
            if((int)i + 1 < n) righttmp += nums[i + 1];
            right[i] += righttmp;
        }
        for(auto i = 0;i < n;i++)
            ans[i] = (abs(left[i] - right[i]));
        return ans;
    }
};
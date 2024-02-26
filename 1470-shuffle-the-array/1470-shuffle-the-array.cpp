class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int a = nums.size();
        int k = 0, j = 0;
        for(int i = 0;i < a;i++){
            if(i % 2 == 0)
                ans.push_back(nums[k]), k++;
            else
                j++, ans.push_back(nums[n + j - 1]);
        }
        return ans;
    }
};
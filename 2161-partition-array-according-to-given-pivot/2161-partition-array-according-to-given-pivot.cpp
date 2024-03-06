class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans(n);
        int count = 0;
        int k = 0;
        for(auto i = 0;i < n;i++){
            if(nums[i] < pivot)
                ans[k++] = nums[i];
            if(nums[i] == pivot)
                count++;
        }
        for(auto i = 0;i < count;i++)
            ans[k++] = pivot;
        for(int i = 0;i < n;i++){
            if(nums[i] > pivot)
                ans[k++] = nums[i];
        }
        return ans;
    }
};
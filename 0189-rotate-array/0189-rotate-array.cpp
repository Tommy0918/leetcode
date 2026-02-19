class Solution {
private:
    void reverse(vector<int> &nums,int start, int end ){
        while(end > start){
            int tmp = nums[end];
            nums[end] = nums[start];
            nums[start] = tmp;
            start++;
            end--;
        }
    }

public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        int n = nums.size();
        if(k == 0) return;
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }
};
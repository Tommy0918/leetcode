class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while(right > left){
            if(nums[left] % 2 != 1)
                left++;
            else if(nums[right] % 2 != 0)
                right--;
            else{
                int tmp = nums[left];
                nums[left] = nums[right];
                nums[right] = tmp;
            }
        }
        return nums;
    }
};
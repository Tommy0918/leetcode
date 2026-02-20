class Solution {
private:
    int max(int num1, int num2){
        if(num1 > num2){
            return num1;
        }
        else{
            return num2;
        } 
    }
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, max_cnt = 0;
        for(int i = 0;i < n;i++){
            if(nums[i] == 1){
                cnt++;
                max_cnt = max(cnt, max_cnt);
            }
            else
                cnt = 0;
        }
        return max_cnt;
    }
};
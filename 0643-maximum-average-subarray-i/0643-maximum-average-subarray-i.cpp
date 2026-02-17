class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double tmp = 0;
        for(int i = 0;i < k;i++)
            tmp += nums[i];
        double avg = tmp;
        for(int i = k;i < nums.size();i++){
            tmp += nums[i] - nums[i - k];
            if(tmp > avg)
                avg = tmp;
        }
        return avg / k;
    }
};
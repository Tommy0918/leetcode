class Solution {
public:
    int count_bit(int n){
        int count = 0;
        while(n > 0){
            if(n % 2 == 1)
                count++;
            n /= 2;
        }
        return count;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(auto i = 0;i < n;i++)
            if(count_bit(i) == k) ans += nums[i];
        return ans;
    }
};
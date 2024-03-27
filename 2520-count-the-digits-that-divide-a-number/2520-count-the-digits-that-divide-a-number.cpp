class Solution {
public:
    int countDigits(int num) {
        int ans = 0;
        int copy = num;
        while(num > 0){
            if(copy % (num % 10) == 0)
                ans++;
            num /= 10;
        }
        return ans;
    }
};
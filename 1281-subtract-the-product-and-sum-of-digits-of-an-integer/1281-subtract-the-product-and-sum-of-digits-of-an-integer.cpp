class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans = 0, tmp = 1;
        while(n > 0){
            int s = n % 10;
            ans += s;
            tmp *= s;
            n = n / 10;
        } 
        return (tmp - ans);
    }
};
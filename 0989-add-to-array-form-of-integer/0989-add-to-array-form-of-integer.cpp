class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int carry = 0;
        int n = num.size(), i = n - 1;
        while(k > 0 || i >= 0 || carry != 0){
            int sum = carry;
            if(k > 0){
                int tmp = k% 10;
                sum += tmp;
                k /= 10;
            }
            if(i >= 0){
                sum += num[i];
                i--;
            }
            carry = sum / 10;
            ans.push_back(sum % 10);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
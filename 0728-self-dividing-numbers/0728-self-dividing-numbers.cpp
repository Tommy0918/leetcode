class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        bool flag = 1;
        for(int i = left;i <= right;i++){
            int num = i, n = i;
            flag = 1;
            while(n){
                int tmp = n % 10;
                if(tmp == 0){
                    flag = 0;
                    break;
                }
                if(num % tmp != 0)
                    flag = 0;
                n /= 10;
            }
            if(flag == 1)
                ans.push_back(i);
        }
        return ans;
    }
};